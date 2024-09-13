import os
os.system("cls")

def Birlashtir(list1, list2):
    ketma_ket = []
    max_length = len(list1) + len(list2)
    for i in range(max_length):
        if i < len(list1):
            ketma_ket.append(list1[i])
        if i < len(list2):
            ketma_ket.append(list2[i])
    
    return ketma_ket

list1 = [1, 2, 3, 13]
list2 = [11, 22, 33, 14, 16]
list3 = Birlashtir(list1, list2)
print("Birlashtirilgan ro'yxat\n", list3)
