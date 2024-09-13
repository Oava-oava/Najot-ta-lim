import math
import os
os.system("cls")

n = int(input("Son: "))
soni = 0

while soni < 5:
    tub = 0
    if n >= 2:
        for i in range(2, n):
            if n % i == 0:
                tub += 1
        if tub == 0:
            print(f"{n} tub son")
            soni += 1
        n += 1
    elif n == 1 or n == 0 or n < 0:
        n += 1