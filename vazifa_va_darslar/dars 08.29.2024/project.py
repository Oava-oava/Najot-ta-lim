import os
os.system("cls")
lst = [1, 13, 17, 'Salom', "JUdda", True, False, 123, "Jamshid"]
print("Ro'yxat\n")
print(lst)
print("\n")
sorov = int(input("1.Qoshish \t2.O'chirish\n3.Sortlash\t4.Chiqarish\n>>> "))
print("\n\n")
if sorov == 1:
    sorov = int(input("1.Oxiridan qo'shish\n2.Index bo'yicha\n3.Oxiridan n ta qo'shish\n>>> "))
    if sorov == 1:
        k = input("Malumot: ").split()
        lst.append(k)
        print("\nIchidagi ma'lumotlar:\n")
        print(lst)
    elif sorov == 2:
        index = int(input("Index: "))
        k = input("Malumot: ")
        lst.insert(index, k)
        print("\nIchidagi ma'lumotlar:\n")
        print(lst)
    elif sorov == 3:
        k = input("Malumot: ").split()
        lst.extend(k)
        print("\nIchidagi ma'lumotlar:\n")
        print(lst)
if sorov == 2:
    sorov = int(input("1.Kiritilgan ma'lumotni o'chirish\n2.Oxiridan bitta.\n3.Hammasini o'chirish\n4.Index boyicha o'chirish\n>>> "))
    if sorov == 1:
        k = input("Malumot: ")
        lst.remove(k)
        print("\nIchidagi ma'lumotlar:\n")
        print(lst)
    elif sorov == 2:
        ochirilgan = lst.pop()
        print(f"\nO'chirilgan ma'lumot: {ochirilgan}\n")
        print("\nIchidagi ma'lumotlar:\n")
        print(lst)
    elif sorov == 3:
        lst.clear()