import os
os.system("cls")

soz = input("Matn: ").lower()
harf = input("harf: ").lower()
text = ""
for i in soz:
    if i == harf:
        i = i.capitalize()
    text = text + i


print(text)