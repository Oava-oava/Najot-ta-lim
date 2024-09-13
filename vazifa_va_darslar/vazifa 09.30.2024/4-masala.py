import os
os.system("cls")

matn = input("Matn: ").split()

text = ""
for i in range(len(matn)):
    if len(matn[i]) % 2 != 0:
        matn[i] = matn[i][::-1]
print(*matn)