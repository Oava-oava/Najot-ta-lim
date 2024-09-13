import os
os.system("cls")

n = input("sonlar: ").split()
n.sort(reverse=True)
for i in n:
    print(i, end="")