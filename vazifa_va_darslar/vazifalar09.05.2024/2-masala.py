import os
os.system("cls")

lst1 = [
    3, 4, 0, 0, 0, 6, 2, 0, 6, 7, 6, 0, 0, 0, 9, 10, 7, 4, 4, 5, 3, 0, 0, 2, 9,
    7, 1
]
print(lst1)
print("\n")

def ZeroHero(lst:list):
    for i in range(len(lst1)):
        for j in range(len(lst1) - 1):
            if (lst1[j] == 0):
                saqlovchi = lst1[j]
                lst1[j] = lst1[j + 1]
                lst1[j + 1] = saqlovchi

  
ZeroHero(lst1)  
print(lst1)