import os
from funcs import number_to_words
os.system("cls")

son = int(input("Son: "))
num_soz = number_to_words(son)
print(num_soz)