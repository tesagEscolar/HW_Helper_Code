def encrypt(text, shift):
 """Función para encriptar una cadena usando el cifrado de César."""
 encrypted_text = ""
 for char in text:
 # Solo encripta caracteres alfabéticos
 if char.isalpha():
 # Obtiene el índice del carácter y lo desplaza
 char_index = ord(char) - ord('a')
 shifted_index = (char_index + shift) % 26
 # Convierte el índice de vuelta a un carácter y lo agrega al resultado encriptado
 encrypted_text += chr(shifted_index + ord('a'))
 else:
 # Agrega el carácter sin encriptar si no es alfabético
 encrypted_text += char
 return encrypted_text

def decrypt(text, shift):
 """Función para desencriptar una cadena encriptada con el cifrado de César."""
 decrypted_text = ""
 for char in text:
 # Solo desencripta caracteres alfabéticos
 if char.isalpha():
 # Obtiene el índice del carácter y lo desplaza hacia atrás
 char_index = ord(char) - ord('a')
 shifted_index = (char_index - shift) % 26
 # Convierte el índice de vuelta a un carácter y lo agrega al resultado desencriptado
 decrypted_text += chr(shifted_index + ord('a'))
 else:
 # Agrega el carácter sin desencriptar si no es alfabético
 decrypted_text += char
 return decrypted_text

# Ejemplo de uso
texto_original = "Hola, ¿cómo estás?"
desplazamiento = 3

texto_encriptado = encrypt(texto_original, desplazamiento)
print("Texto encriptado:", texto_encriptado)

texto_desencriptado = decrypt(texto_encriptado, desplazamiento)
print("Texto desencriptado:", texto_desencriptado)