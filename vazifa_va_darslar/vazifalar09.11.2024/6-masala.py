import os
os.system("cls")
file_name = input("faylnomi [.txt] bilan: ")
#! file_name = 'inputer1.txt'

with open(file_name, 'r') as file:
    content = file.read()
print("Fayl ichidagi ma'lumotlar")
print(content)

harflar = []

for char in content:
    if char.isalpha():
        harflar.append(char)
        
kam_harf = sorted(harflar, reverse=True)
kop_harf = sorted(harflar)
with open("new_1.txt", "w") as file:
    file.write(' '.join(map(str, kop_harf)))

with open("new_2.txt", "w") as file:
    file.write(' '.join(map(str, kam_harf)))