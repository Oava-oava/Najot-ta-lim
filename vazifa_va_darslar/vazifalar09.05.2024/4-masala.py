import os
os.system("cls")

mylist = [[10, 20], [40], [30, 56, 25], [10, 20], [33], [40]]


def unique_elements(mylist):
    tuple_list = []
    for item in mylist:
        t = tuple(item)
        tuple_list.append(t)
    setter = set(tuple_list)
    tayyor_list = list(map(list, setter))
    
    return tayyor_list

new_array = unique_elements(mylist)
print("Noyob elementlar ro'yxati:", new_array)