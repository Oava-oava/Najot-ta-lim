import os
os.system("cls")


mylist = ['abcd', 'abc', 'bcd', 'bkie', 'cder', 'cdsw', 'sdfsd', 'dagfa', 'acjd']
print(mylist)
n = input("harf kiriting: ")

def unique_elements(mylist:str, harf: str):
    new_list = list()
    for i in mylist:
        if(i[0] == n):
            new_list.append(i)
    
    
    return new_list

new_array = unique_elements(mylist, n)
print("Kiritilgan harf bo'yicha\n", new_array)