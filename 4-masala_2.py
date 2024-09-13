class Mashina:
    def __init__(self, model, yil: int, narx: float):
        self.modeli = model
        self.yili = yil
        self.narxi = narx
    
    def Tanishtir(self):
        print(f"Model: {self.modeli}")
        print(f"Yil: {self.yili}")
        print(f"Narx: {self.narxi}")
    
    def Egasi(self):
        ega = {}
        ls = ["Ismi", "Familyasi", "Tug'ilgan yili"]
        for i in ls:
            ega[i] = input(f"{i}: ")
        print("Egasining ma'lumotlari:")
        for k, v in ega.items():   
            print(f"{k}: {v}")  #shu joyini chatgpt chiqarib berdi 

m1 = Mashina("BMW", 2018, 457154.21) #floatda katta raqamlarni nuqta bn yozib bo'mas ekan
m1.Tanishtir()
m1.Egasi()
print("\n\n")
m2 = Mashina("Audi", 2021, 545185.48)
m2.Tanishtir()
m2.Egasi()
print("\n\n")
m3 = Mashina("Ferrari", 2024, 1789486.74)
m3.Tanishtir()
m3.Egasi()
