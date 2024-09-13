import os
os.system("cls")
lst1 = [1, 3, 5, 7, 9, 10]
lst2 = [2,4,6,8]
print("Birinchi array:")
print(lst1)
print("\nIkkinchi array:")
print(lst2)

def list_adder(first: list, second: list):
    first.append(second[-1])
    

list_adder(lst1, lst2)

print("\nOxirgi element qo'shilgan array")
print(lst1)

