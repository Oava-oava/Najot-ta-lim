import os 
os.system("cls")       
lst = [[1, 'Jean Castro', 'V'], [2, 'Lula Powell', 'V'],
       [3, 'Brian Howell', 'VI'], [4, 'Lynne Foster', 'VI'],
       [5, 'Zachary Simon', 'VII']]

d = {}
for i in lst:
    d[i[0]] = i[1:]
    
print("List")
print(lst, end="\n\n")
print("Dictionary")
print(d, end="\n\n")

print(lst[0][1:])