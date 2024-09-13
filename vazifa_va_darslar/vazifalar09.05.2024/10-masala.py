import os
os.system("cls")

#! my_list = list(map(int, input("sonlar: ").split()))
my_list = [1,2,6,4,3,2,4,6]
print("Kiritilgan list")
print(my_list)

def izla_top(list1:list):
    
    new_list = []
    for i in list1:
        if list1.count(i) == 1:
            new_list.append(i)
    
    for i in list1:
        if list1.count(i) == 2:
            print(f"Ikkimarta takrorlangan bittasi: {i}")
            new_list.insert(-1, i)
            break
            
    if new_list:
        return new_list
    elif new_list == []:
        return list1
my_list = izla_top(my_list)

print(my_list)


#! Listni Nta sonlar bilan input orqali kiriting. Ushbu sonlardan faqat 2marta va undan ko'p takrorlanganlarni faqat 1tasini qoldiring va saralang.
#! Input: N=8 sonlar=[1,2,6,4,3,2,4,6]
#! Output: sonlar=[1,2,3,4,6] bunaqa bolmaydi
#! Output: sonlar=[1,2,3] bunaqa boladi tushunishim bo'yicha
