# !/bin/bash
# lines that start like this are shell comments
# read projects current directory with $PWD
echo “running command from” $PWD 
cd $PWD
git add .
git commit -am "$1"
git push
exit 1