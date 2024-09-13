import os
os.system("cls")

tpl = [(10, 20, 40), (40, 50, 60), (70, 80, 90)]
print("Kiritilgan Tuple:")
print(tpl, end="\n\n")
new = []

for t in tpl:
    k = list(t)
    k[-1] = 100
    new.append(tuple(k))
tpl = new
print("O'zgartirilgan tuple")
print(tpl)
