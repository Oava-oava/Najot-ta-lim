import os
os.system("cls")
son1 = int (input("1-son: "))
son2 = int (input("2-son: "))
son3 = int (input("3-son: "))
juft_son = 0

if(son1 % 2 == 0):
    juft_son += son1

if(son2 % 2 == 0):
    juft_son += son2

if(son3 % 2 == 0):
    juft_son += son3



print(f"Kiritilgan juft sonlarning yig'indisi: {juft_son}")