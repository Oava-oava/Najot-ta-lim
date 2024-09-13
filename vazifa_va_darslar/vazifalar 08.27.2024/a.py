# import os
# os.system("cls")
son1 = int (input("1-son: "))
son2 = int (input("2-son: "))
son3 = int (input("3-son: "))

if (son1 >= son2 and son1 <= son3 or son1 >= 3 and son1 <= son2):
    print(f"O'rtacha son bu 1-son: {son1}")
elif (son2 >= son1 and son2 <= 3 or son2 >= 3 and son2 <= son1):
    print(f"O'rtacha son bu 2-son: {son2}")
else:
    print(f"O'rtacha son bu 3-son: {son3}")

# elif(son3 >=son1 and son3 <= son2 or son3 >= son2 or son3 <= son1):
#     print(f"O'rtacha son bu 3-son: {son3}")

