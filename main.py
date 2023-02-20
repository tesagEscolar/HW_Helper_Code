from flask import Flask, request, jsonify
from youtube_transcript_api import YouTubeTranscriptApi
from youtube_transcript_api.formatters import JSONFormatter

import os
import openai
import subprocess
import wolframalpha
import wikipedia as wp

openai_models = {
  "davinci": "text-davinci-003",
  "curie": "text-curie-001",
  "ada": "text-ada-001"
}


def wikipedia_answer(query):
  try:
    return wp.summary(query, auto_suggest=True)
  except:
    return ''


def openai_answer(query):
  openai.api_key = os.getenv("OPENAI_API_KEY")

  response = openai.Completion.create(model=openai_models['curie'],
                                      prompt=query,
                                      temperature=0.3,
                                      max_tokens=256,
                                      top_p=1,
                                      frequency_penalty=0,
                                      presence_penalty=0)

  return response


# defining a function to find answer
def wolfram_answer(question):
  """This function will return the answer 
    for the input query from the users"""

  # creating an object of the Client() class using the APP ID
  the_client = wolframalpha.Client(os.environ['WOLFRAM_APP_API'])

  try:
    # storing the response from wolfram alpha
    response = the_client.query(question)

    # including only the text from the responses
    answer = next(response.results).text
  except:
    answer = ""
  # returning the answer
  return answer


app = Flask(__name__)


@app.route('/transcript', methods=['GET', 'POST'])
def video_transcript():
  json = request.get_json(force=True)
  if json.get('video_ids') is None:
    return jsonify({'message': 'Bad request'}), 400

  video_ids = json.get('video_ids')
  transcript = YouTubeTranscriptApi.get_transcripts(video_ids,
                                                   languages=['es', 'en'])
  trs = []
  for video in transcript:
    for props in video:
      texts = [a_tuple.get('text') for a_tuple in video[props]]
      text = ' '.join(texts)
      trs.append(text)
  
  return jsonify({'transcripts': trs}), 200


@app.route('/code', methods=['POST', 'GET'])
def create_script():
  json = request.get_json(force=True)
  if json.get('script') is None:
    return jsonify({'message': 'Bad request'}), 400
  
  script = json.get('script')
  commitMessage = json.get('name')
  script = ' '.join(script)
  file1 = open(f'Parcial1/{commitMessage}.cpp', "w")
  file1.writelines(script)
  commitMessage = f'File {commitMessage} created by HW helper'
  file1.close()
  subprocess.call(['bash','./pushToGh.sh', commitMessage])
  return jsonify({'message': 'Code Files created succesfully'}), 200
  

@app.route('/')
def index():
  print('it didnt arrive')
  return 'hello'
  if request.method != 'GET':
    return 'Error something went wrong'

  query = request.args.get('q')
  array = ['es']
  if query is None and 'es' in array:
    return 'Error something went wrong'

  answer = wikipedia_answer(query)
  return answer


app.run(host='0.0.0.0', port=81)
