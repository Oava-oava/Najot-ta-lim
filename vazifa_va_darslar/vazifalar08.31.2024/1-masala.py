import os
os.system("cls")
d1 = {1: 10, 2: 20}
d2 = {3: 30, 4: 40}
d3 = {5: 50, 6: 50}

lst = [d1, d2, d3]

sum_dict = {}

for i in range(len(lst)):
    sum_dict.update(lst[i])
    
print(sum_dict)