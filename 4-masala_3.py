class Maktab:
    def __init__(self, manzil: str, raqami: int, oquvchi_soni: int):
        self.manzili = manzil
        self.raqami = raqami
        self.o_soni = oquvchi_soni
    
    def Tanishtir(self):
        print(f"Manzili: {self.manzili}")
        print(f"Raqami: {self.raqami}")
        print(f"O'quvchilar soni: {self.o_soni}")
    
    def Teachers(self):
        ustozlar= {}
        ls = ["Matematika", "Ingliz tili", "Tarix"]
        for i in ls:
            ustozlar[i] = input(f"{i}: ")
        print("Maktabdagi o'qituvchilar soni:")
        for k, v in ustozlar.items():
            print(f"{k}: {v}")
m1 = Maktab("Beruniy", 35, 344)
m1.Tanishtir()
m1.Teachers()
print("\n\n")
m2 = Maktab("Urganch", 21, 547)
m2.Tanishtir()
m2.Teachers()
print("\n\n")
m3 = Maktab("Toshkent", 145, 1428)
m3.Tanishtir()
m3.Teachers()