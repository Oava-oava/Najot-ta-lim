import os
os.system("cls")

talaba = ['Diyor', 'Dilbek', 'Maftuna', "Dildora",
          "Madina", 'Farruxbek', 'Mirafzal', 'Muhridd in']

ls = list(filter(lambda n: (n[-1] == 'k'), talaba))

print(ls)