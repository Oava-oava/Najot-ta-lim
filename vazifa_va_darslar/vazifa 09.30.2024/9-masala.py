import os
os.system("cls")

tpl = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)

for i in range(len(tpl)):
    if i == 3 or i == len(tpl) - 4:
        print(f"{tpl[i]} ", end="")