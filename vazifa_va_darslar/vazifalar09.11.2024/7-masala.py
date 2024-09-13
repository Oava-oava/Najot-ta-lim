import os

os.system("cls")
file_name = "test7.txt"

with open(file_name, "r") as file:
    content = file.read()
print("Fayl ichidagi ma'lumotlar")
print(content)

only_num = []
t = ""
for j in content:
    if not j.isdigit() and t != "":
        only_num.append(t)
        t = ""
    elif j.isdigit():
        t += j

# Oxirgi raqamni qo'shish
if t != "":
    only_num.append(t)

with open("raqamlar.txt", "w") as file :
    file.write("+".join(map(str, only_num)))

print(only_num)
