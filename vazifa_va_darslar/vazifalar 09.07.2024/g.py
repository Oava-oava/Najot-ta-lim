# def eng_yaqin_unli(harf):
#     unli_harflar = 'aeiou'
#     eng_yaqin = None
#     eng_kichik_masofa = float('inf')
    
    
#     for unli in unli_harflar:
#         masofa = abs(ord(harf) - ord(unli))
#         if masofa < eng_kichik_masofa:
#             eng_kichik_masofa = masofa
#             eng_yaqin = unli
    
#     return eng_yaqin

# # Misol uchun
# print(eng_yaqin_unli('c'))  # a
# print(eng_yaqin_unli('c'))  # a
# print(eng_yaqin_unli('f'))  # e
def ismlar(lst:list):
    ls3=filter(lambda n: n[0]=="A", lst)
    ls3=filter(lambda n: n[-1]=="a", lst)
    return list(ls3)