import os
os.system("cls")
file_name = 'test2.txt'

with open(file_name, 'r') as file:
    content = file.read()
print("Fayl ichidagi ma'lumotlar")
print(content)    
soni = 0
for i in content:
    if i.isdigit():
        soni += 1
print()
print(f"fayl ichida {soni} ta raqam mavjud.")