import os
os.system("cls")

num = int(input("raqamni kiriting: "))

if num % 3 == 0 and num % 5 == 0:
    print("FizzBuzz")
elif num % 3 == 0:
    print("Fizz")
elif num % 5 == 0:
    print("Buzz")
else:
    print(f"hechqaysi emas: {num}")
