import os
os.system("cls")

def Birlashtir(list1:list, list2: list):
    lst_1 = set(list1)
    lst_2 = set(list2)
    new = list(lst_1.intersection(lst_2))
    return new


list1 = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
list2 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
new = Birlashtir(list1, list2)
print("Ikki listda bor elementlar\n", new)
