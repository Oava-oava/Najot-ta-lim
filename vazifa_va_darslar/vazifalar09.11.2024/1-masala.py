import os
os.system("cls")
file_name = 'test.txt'

with open(file_name, 'r') as file:
    content = file.read()
print("Fayl ichidagi ma'lumotlar")
print(content)    
print()

first_word = content.split()[0]
print("Fayl ichidagi birinchi ma'lumot")
print(first_word, first_word)
