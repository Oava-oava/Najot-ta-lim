import os 
os.system("cls")

numbers = input("sonlar: ").split()

for i in numbers:
    if int(i[0]) % 2 == 0:
        print(i)

print(numbers)