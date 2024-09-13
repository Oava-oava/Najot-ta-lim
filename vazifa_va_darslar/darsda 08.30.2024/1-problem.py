import os
os.system("cls")

l1 = [int(input()) for i in range(int(input("N1: ")))]
l2 = [int(input()) for i in range(int(input("N2: ")))]
l3 = [int(input()) for i in range(int(input("N3: ")))]
l4 = [int(input()) for i in range(int(input("N4: ")))]
l = [l1, l2, l3, l4]


print(l); katta = 0

for j in l:
    if(sum(j) == katta):
        print(j)