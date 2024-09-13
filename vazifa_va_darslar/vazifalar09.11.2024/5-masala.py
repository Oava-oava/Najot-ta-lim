import os
os.system("cls")
file_name = input("faylnomi [.txt] bilan: ")
#! file_name = 'inputer.txt'

with open(file_name, 'r') as file:
    content = file.read()
print("Fayl ichidagi ma'lumotlar")
print(content)

raqamlar = []

for num in content:
    if num.isdigit():
        raqamlar.append(int(num))
        
# Raqamlarni kamayish tartibi       
rev_sorted_num = sorted(raqamlar, reverse=True)

# Raqamlarni osish tartibi       
sorted_num = sorted(raqamlar)
print()
print(rev_sorted_num)
print(sorted_num)

# Kamayish tartibidagi raqamlarni new1 fayliga yozish
with open('new1.txt', 'w') as file:
    file.write(' '.join(map(str, rev_sorted_num)))

# Osish tartibidagi raqamlarni new2 fayliga yozish  
with open('new2.txt', 'w') as file:
    file.write(' '.join(map(str, sorted_num)))
    
print("Raqamlar yozildi.")    
