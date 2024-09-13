import os
os.system("cls")
son1 = int (input("1-son: "))
son2 = int (input("2-son: "))
son3 = int (input("3-son: "))

if(son1 >= son2 and son1 > son3):
    print(f"1-son Katta: {son1}")
elif(son2 >= son1 and son2 >= son3):
    print(f"2-son Katta {son2}")
else:
    print(f"3-son katta")