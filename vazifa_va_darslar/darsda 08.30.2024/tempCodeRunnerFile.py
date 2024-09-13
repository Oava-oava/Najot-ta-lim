import os

os.system("cls")
# n = int(input(": "))


lst = [1, 2, 4, 2, 3, 2, 2, 1, 3, 5, 1, 6, 2, 55, 5, 8]
# c = lst.count(n)
j = 0
for i in range(len(lst)):
    soni = 0
    for j in range(i, len(lst)):
        if lst[i] == lst[j]:
            soni += 1
    print(f"{lst[i]} = {soni} ta")
