import os
os.system("cls")

def Yaqin_Unli(harf):
    unli = ['a', 'e', 'i', 'u', 'o']
    kam = abs(ord(harf) - ord(unli[0]))
    tanlangan_harf = unli[0]

    for i in range(1 ,len(unli)):
        if  abs(ord(harf) - ord(unli[i])) < kam:
            kam =  abs(ord(harf) - ord(unli[i]))
            tanlangan_harf = unli[i]
    return tanlangan_harf

unlilar = Yaqin_Unli('e')
