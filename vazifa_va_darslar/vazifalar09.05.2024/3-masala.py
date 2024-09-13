import os
os.system("cls")

lst1 = [1, 3, 5, 7, 9, 10]
lst2 = [2,4,6,8]

def list_adder(lst1:list, lst2: list):
    lst1.extend(lst2)


list_adder(lst1, lst2)
print(lst1)