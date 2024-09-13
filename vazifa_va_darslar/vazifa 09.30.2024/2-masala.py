import os
os.system("cls")

matn = input("Gap: ").lower().split()

matn.sort()
print(*matn)