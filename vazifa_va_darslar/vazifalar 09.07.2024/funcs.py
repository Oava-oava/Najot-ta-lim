def binar(num: int):
    num = bin(num)
    num = str(num)
    num = num[2:]
    return num

def kvadrat(lst:list):
    lst = list(map(lambda n: n * n, lst))
    return lst

def toq_juft(lst: list):
    toq = list(filter(lambda n: n % 2 != 0, lst))
    juft = list(filter(lambda n: n % 2 == 0, lst))
    return [toq, juft]

def number_to_words(num):
    ones = ["", "bir", "ikki", "uch", "to'rt", "besh", "olti", "yetti", "sakkiz", "to'qqiz"]
    tens = ["", "o'n", "yigirma", "o'ttiz", "qirq", "ellik", "oltmish", "yetmish", "sakson", "to'qson"]
    hundreds = ["", "bir yuz", "ikki yuz", "uch yuz", "to'rt yuz", "besh yuz", "olti yuz", "yetti yuz", "sakkiz yuz", "to'qqiz yuz"]
    thousands = ["", "ming"]
    number_words = ""

    if num == 0:
        return "nol"

    if num < 10:
        return ones[num]
    elif num < 100:
        return tens[num // 10] + " " + ones[num % 10]
    elif num < 1000:
        return hundreds[num // 100] + " " + tens[(num % 100) // 10] + " " + ones[num % 10]
    elif num < 10000:
        return ones[num // 1000] + " " + thousands[1] + " " + hundreds[(num % 1000) // 100] + " " + tens[(num % 100) // 10] + " " + ones[num % 10]
    
    
def Yaqin_Unli(harf):
    english_alphabet = [
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
]
    harf = harf.lower()
    if len(harf) == 1 and harf in english_alphabet:    
        unli = ['a', 'e', 'i', 'u', 'o']
        kam = abs(ord(harf) - ord(unli[0]))
        tanlangan_harf = unli[0]

        for i in range(1 ,len(unli)):
            if  abs(ord(harf) - ord(unli[i])) < kam:
                kam =  abs(ord(harf) - ord(unli[i]))
                tanlangan_harf = unli[i]
        return tanlangan_harf
    elif len(harf) > 1:
        string = "Kiritilgan argumentlar soni 1 dan oshib ketdi."
        return string
    elif harf not in english_alphabet:
        string = "Harf kiriting iltimos."
        return string
    
    
def name_finder(lst:list):
    ls3=filter(lambda n: n[0]=="A", lst)
    ls3=filter(lambda n: n[0]=="a", lst)
    ls3=filter(lambda n: n[-1]=="a", lst)
    return list(ls3)