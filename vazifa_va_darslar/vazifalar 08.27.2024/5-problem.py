import os
os.system("cls")
# matn = input("Matn: ")
# text = ""
# for i in range(len(matn)):
#     if (matn[i].islower()):
#         text = text + matn[i].upper()
#     elif(matn[i].isupper()):
#         text = text + matn[i].lower()
#     elif(matn[i].isspace()):
#         text = text + ' '
#     else:
#         continue

middle = 10 // 2

for i in range(10):
    for j in range (10):
        if i  <= j:    
            print("* ", end="")
        else:
            print("  ", end="")
    print()

# soz = input("Matn: ")

# for i in soz:
#     if i.isdigit():
#         i = 'A'
#     print(i)

# soz = "Salom Bolalar"

# for i in range(len(soz)):
#     print(soz[i])




# s = "salom"
# for i in s:
#     if i == 'a':
#         continue
#     print(i, end="")

# a, b, c = map(int, input("N: ").split())
# y = a + b - c
# if y > 0 :
#     print(y)
# elif y < 0:
#     print("Error")