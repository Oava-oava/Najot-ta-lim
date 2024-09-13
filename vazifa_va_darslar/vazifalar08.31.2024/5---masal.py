import os
os.system("cls")

n = input("sonlar: ")

new_ss = []
#! n dan kelgan faqat sonlarni new_ss ga qo'shish
for i in n:
    if i.isdigit():
        new_ss.append(i)
        
#! listni ko'payish tartibida tartiblash
new_ss.sort(reverse=True)

#! tayyor bo'lgan listni chiqarish
print("Kiritilgan raqamlardan eng katta raqam qilingani:")
print(">>>", end=" ")
for i in new_ss:
    print(i,end="")