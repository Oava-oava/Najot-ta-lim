import os
os.system("cls")

import os
os.system("cls")

d = {1: 123, 2: 456, 3: 231, 4: 789, 5: 654,}
kichik = d[1]
for i, v in d.items():        
    if i < kichik:
        kichik = i
        value1 = v
son = 0
for i , v in d.items():
    if i != kichik and son < 3:
        print(i)
        son += 1



print(d)