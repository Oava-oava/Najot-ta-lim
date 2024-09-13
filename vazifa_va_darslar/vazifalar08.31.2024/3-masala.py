import os
os.system("cls")

d = {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}
katta = d[1]
kichik = d[1]
for i, v in d.items():
    print(i, v)
    if v > katta:
        katta = i
        value = v

        
    if i < kichik:
        kichik = i
        value1 = v
        

d.pop(kichik)
d.pop(katta)
print(d)