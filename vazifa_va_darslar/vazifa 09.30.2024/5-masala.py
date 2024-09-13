import os
os.system("cls")

n = int(input("N: "))
k = str(bin(n))
soni = 0
for i in range(2, len(k)):
    print(k[i], end="")
    if k[i] == '0':
        soni += 1

print("\n")
print(soni)