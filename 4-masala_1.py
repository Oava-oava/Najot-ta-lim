class Talaba:
    def __init__(self, ism, familya, kurs):
        self.ismi=ism
        self.familya=familya
        self.kursi=kurs
    def Tanishtir(self):
        print(self.ismi)
        print(self.familya)
        print(self.kursi)  
    def baholari(self):
        baholar={}
        ls=["math", "English", "History"]
        for i in ls:
            baholar[i]=input(f"{i}dan Baho: ")
        print(baholar)
t1=Talaba("Abdulloh", "Abdullayev", 2)
t1.Tanishtir()
t1.baholari()
print("\n\n")
t2=Talaba("Sulaymon", "Sobirov", 3)
t2.Tanishtir()
t2.baholari()
print("\n\n")
t3=Talaba("Abubakr", "Rahimov", 1)
t3.Tanishtir()
t3.baholari()
