import os
os.system("cls")

taxmin = int(input("1 dan 5 gacha son kiriting: "))
son = 5

if(taxmin > son):
    print("Sovuq")
elif(taxmin < son):
    print("Issiq")
elif(taxmin == son):
    print("Yutib qoydingiz")



taxmin2 = int(input("1 dan 5 gacha son kiriting: "))

if(taxmin2 > son):
    print("Sovuq")
elif(taxmin2 < son):
    print("Issiq")
elif(taxmin2 == son):
    print("Yutib qoydingiz")

# 1- Problem
# son1 = int(input("son1 "))
# son2 = int(input("son2 "))
# son3 = int(input("son3 "))
# son4 = int(input("son4 "))
# son5 = int(input("son5 "))

# juft = 0
# soni = 0
# if(son1 % 2 == 0):
#     soni = soni + 1
#     juft += son1
# if(son2 % 2 == 0):
#     soni = soni + 1
#     juft += son2
# if(son3 % 2 == 0):
#     soni = soni + 1
#     juft += son3
# if(son4 % 2 == 0):
#     soni = soni + 1
#     juft += son4
# if(son5 % 2 == 0):
#     soni = soni + 1
#     juft += son5

# print(f"Juft sonlar o'rta arfimetigi * 3:  {(juft * 3) / soni}")



# a, b = map(int, input("sonlarni kiriting ").split())
# P = (a + b) * 2
# print("Perimetr ", P)

# son1 = 1
# son2 = 2
# son3 = 3
# son4 = 4
# son5 = 5

# sum  = son1 + son2 + son3 + son4 + son5 

# print(f"{son1} + {son2} + {son3} +  {son4} + {son5} = {sum}")


# print(1,2,3,4,5, sep=" + ", end=" = ")
# print(1+2+3+4+5)
# matn = "salom"
# print(*matn, sep="*")

# a = int(input("A: "))
# b = int(input("B: "))

# c = (a + b) * 2
# print(f"4 burchakning perimetri: {c}")


"""
# 2- Exemple
son = int (input("son: "))
b = son > 0

print(f"qiymat: {b}")



soz = "Yaxshimisizlar"
print(soz[:: -4])
print(soz[:: 1])

"asdf"

print(f"kiritlgan matn: {soz}.")

haqiqiyson = 123455.44; matn = "salom"
print(f"kiritlgan matn: {matn}.")

# 1- EXEMPLE
# son = input("ma'lumotni kiriting: ")
# print(son)

# son = 123
# satr = "hello world"
# b = True

# print(son)
# print(satr)
# print(b)

"""