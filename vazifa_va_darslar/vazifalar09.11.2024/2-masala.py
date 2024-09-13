import os
os.system("cls")
file_name = 'test1.txt'

with open(file_name, 'r') as file:
    content = file.read()
print("Fayl ichidagi ma'lumotlar")
print(content)    
print()
word = content.split()[-1]

last_word = ""
for i in word:
    if i.isalpha():
        last_word += i
print(last_word, last_word)
