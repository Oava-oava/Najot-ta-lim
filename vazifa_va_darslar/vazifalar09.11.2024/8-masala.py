import os 
os.system("cls")

countries_file = "countries.txt"
capitals_file = "capitals.txt"
output_file = "countries_and_capitals.txt"

with open(countries_file, "r") as file:
    countries = file.read().split()

with open(capitals_file, "r") as file:
    capitals = file.read().split()

with open(output_file, "w") as file:
    for country, capital in zip(countries, capitals):
        file.write(f"{country} - {capital}\n")

print(f"Yangi fayl yaratildi.")
