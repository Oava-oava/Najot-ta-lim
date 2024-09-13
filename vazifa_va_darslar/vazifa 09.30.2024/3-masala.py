import os
os.system("cls")
n = int(input("N: "))
for i in range(1, n + 1):
    summ = 0
    j = 0
    for j in range(1, i):
        summ += j
        print(f"{j} + ", end="")
    print(f"{j + 1} = {summ + j + 1}")
