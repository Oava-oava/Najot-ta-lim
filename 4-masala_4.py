class Bank:
    def __init__(self, manzil: str, nomi, ishchi_soni: int):
        self.manzili = manzil
        self.nomi = nomi
        self.i_soni = ishchi_soni
    
    def Tanishtir(self):
        print(f"Manzili: {self.manzili}")
        print(f"Nomi: {self.nomi}")
        print(f"Ishchilar soni: {self.i_soni}")
    
    def Valyuta_kursi(self):
        valyuta= {}
        ls = ["Dollar", "Yevro", "Rubl"]
        for i in ls:
            valyuta[i] = input(f"{i}: ")
        print(f"{self.nomi} bankidagi valyutalar kursi:")
        for k, v in valyuta.items():
            print(f"{k}: {v}")
m1 = Bank("Beruniy", "Xalq", 344)
m1.Tanishtir()
m1.Valyuta_kursi()
print("\n\n")
m2 = Bank("Urganch", "Infin", 547)
m2.Tanishtir()
m2.Valyuta_kursi()
print("\n\n")
m3 = Bank("Toshkent", "NBU", 1428)
m3.Tanishtir()
m3.Valyuta_kursi()