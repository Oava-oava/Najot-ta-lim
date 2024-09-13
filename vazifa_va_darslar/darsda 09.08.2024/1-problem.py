import os
os.system("cls")

ls = [("Piyoz", 1200), ("Go'sht", 80000), ("Guruch", 1500), ("Sabzi", 5600), ("Yog'", 1700), ("Piyoz", 1200),("Bodring", 3300)]
print("Kiritilgan tuple")
print(ls)

print("\nsortlangan tuple")

sorted_tuple =  sorted(ls, key=lambda maxsulot: maxsulot[1], reverse=True)

print(sorted_tuple)

