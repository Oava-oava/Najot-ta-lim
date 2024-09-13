import os
os.system("cls")
son1 = int (input("1-son: "))
son2 = int (input("2-son: "))
son3 = int (input("3-son: "))
son4 = int (input("4-son: "))

toq_son = 0; juft_son = 0

if(son1 % 2 == 0 and son1 != 0):
    juft_son = juft_son + (son1 + 10)
elif (son1 % 2 != 0 and son1 != 0 ):
    toq_son = toq_son + (son1 * 3)

if(son2 % 2 == 0 and son2 != 0):
    juft_son = juft_son + (son2 + 10)
elif (son2 % 2 != 0 and son2 != 0 ):
    toq_son = toq_son + (son2 * 3)

if(son3 % 2 == 0 and son3 != 0):
    juft_son = juft_son + (son3 + 10)
elif (son3 % 2 != 0 and son3 != 0 ):
    toq_son = toq_son + (son3 * 3)

if(son4 % 2 == 0 and son4 != 0):
    juft_son = juft_son + (son4 + 10)
elif (son4 % 2 != 0 and son4 != 0 ):
    toq_son = toq_son + (son4 * 3)



print(f"Juft sonlar: {juft_son}")
print(f"Toq sonlar: {toq_son}")