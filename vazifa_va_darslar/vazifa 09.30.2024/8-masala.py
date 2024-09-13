import os
os.system("cls")

n = int(input("N: "))
summ = 0
num = 2

for i in range(1, n + 1):
    print(f"{num}", end="")
    summ += num
    num = (num * 10) + 2
    if i < n:
        print(" + ", end="")
print(f" = {summ}")
