import os
os.system("cls")

string = input("string: ")
lst = input("list: ").split()

for i in range(len(lst)):
    lst[i] = string + lst[i]

print(lst)