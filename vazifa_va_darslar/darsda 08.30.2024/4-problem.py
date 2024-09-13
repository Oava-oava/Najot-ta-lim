import os

os.system("cls")
# n = int(input(": "))


lst = [1, 2, 4, 2, 3, 2, 2, 1, 3, 5, 1, 6, 2, 55, 5, 8]
lst2 = [1, 2, 4, 2, 3, 2, 2, 1, 3, 5, 1, 6, 2, 55, 5, 8]
# c = lst.count(n)
j = 0
for i in range(len(lst)):
    soni = 0
    for j in range(i + 1, len(lst2)):
        saqlovchi = lst[i]
        if lst2[i] == lst2[j]:
            soni += 1
            lst2.remove(lst2[i])
    print(f"{saqlovchi} = {soni} ta")
