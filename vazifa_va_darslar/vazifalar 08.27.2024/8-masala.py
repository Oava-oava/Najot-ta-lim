import os
os.system("cls")
son1 = int (input("1-son: "))
son2 = int (input("2-son: "))
son3 = int (input("3-son: "))
son4 = int (input("4-son: "))
juft_son = 0

if(son1 % 2 == 0):
    juft_son += 1

if(son2 % 2 == 0):
    juft_son += 1

if(son3 % 2 == 0):
    juft_son += 1

if(son4 % 2 == 0):
    juft_son += 1



if(juft_son >= 2):
    print(f"{son1} {son2} {son3} {son4}")
else:
    print(0)