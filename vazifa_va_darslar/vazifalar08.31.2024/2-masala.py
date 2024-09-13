import os

os.system("cls")

n = int(input("N: "))
d = {}
if n > 0:
    for i in range(1, n + 1):
        d[i] = i * i
    print()
    print(d)
    print()
else:
    print("Noto'g'ri raqam")
