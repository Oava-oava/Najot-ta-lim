import os
os.system("cls")

#! mylist = list(map(int, input("sonlar: ").split()))
my_list = [1,2,6,4,3,2,4,6]
print("Kiritilgan list")
print(my_list)

def izla_top(list1:list):
    
    new_list = []
    for i in list1:
        if list1.count(i) >= 2:
            new_list.append(i)
    
    if new_list:
        return new_list
    elif new_list == []:
        return list1
my_list = izla_top(my_list)

print(my_list)
