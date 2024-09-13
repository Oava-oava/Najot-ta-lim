import os
os.system("cls")

belgi = input("Harf kiriting: ")

if len(belgi) != 1:
    print("Iltimos, faqat bitta harf kiriting.")
else:
    unli = "AaOoUuEeIi"
    undosh = "QqWwRrTtYyPpSsDdFfGgHhJjKkLlZzXxCcVvBbNnMm"

    if belgi in unli:
        print(f"Kiritilgan bu unli harf: {belgi}")
    elif belgi in undosh:
        print(f"Kiritilgan bu undosh harf: {belgi}")
    else:
        print(f"Kiritilgan harf emas: {belgi}")
