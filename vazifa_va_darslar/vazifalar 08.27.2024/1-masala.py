import os
os.system("cls")
son1 = int (input("1-son: "))
son2 = int (input("2-son: "))
son3 = int (input("3-son: "))
son4 = int (input("4-son: "))
son5 = int (input("5-son: "))
son6 = int (input("6-son: "))

toq_son = 0; juft_son = 0

if(son1 % 2 == 0 and son1 != 0):
    juft_son += 1
elif (son1 % 2 != 0 and son1 != 0 ):
    toq_son += 1

if(son2 % 2 == 0 and son2 != 0):
    juft_son += 1
elif (son2 % 2 != 0 and son2 != 0 ):
    toq_son += 1

if(son3 % 2 == 0 and son3 != 0):
    juft_son += 1
elif (son3 % 2 != 0 and son3 != 0 ):
    toq_son += 1

if(son4 % 2 == 0 and son4 != 0):
    juft_son += 1
elif (son4 % 2 != 0 and son4 != 0 ):
    toq_son += 1

if(son5 % 2 == 0 and son5 != 0):
    juft_son += 1
elif (son5 % 2 != 0 and son5 != 0 ):
    toq_son += 1

if(son6 % 2 == 0 and son6 != 0):
    juft_son += 1
elif (son6 % 2 != 0 and son6 != 0 ):
    toq_son += 1


print(f"Juft sonlar: {juft_son}")
print(f"Toq sonlar: {toq_son}")