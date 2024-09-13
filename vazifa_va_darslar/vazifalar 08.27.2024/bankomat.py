import os
os.system("cls")

balance = 1000000
user_password = 12345
user_number = 990169791
user_name = "Sherov Ortiqbek"
user_en_name = "Andrew Tate"

print("Kartani kiritdingiz.\tYou entered your card .\n")
print("Iltimos tilni tanlang. \tPlease choose your language\n")
print("O'zbek tili uchun [1].\tTo choose Englsih [2].\n")
til_sorov = int(input("Tartib raqamni kiriting: "))
password_try = 0

# OZBEK TILI TANLANGANDA
if( til_sorov == 1 ):
    # UZBEK TILI UCHUN KIRISH PAROL SORASH
    password_cheack = int(input("Iltimos parolni kiriting: "))
    if (password_cheack != user_password):
        password_try = password_try + 1
        password_cheack = int(input("Iltimos tekshirib qaytadan kiriting: "))
    if (password_cheack != user_password and password_try < 2):
        password_try = password_try + 1
        password_cheack = int(input("Iltimos tekshirib qaytadan kiriting: "))
    if (password_cheack != user_password and password_try < 2 ):
        password_try = password_try + 1
    if password_try == 2:
        print("Xavfsizlik maqasadida kartangiz bizda qoladi. Xayr Salomat bo'ling.\n")
    elif(password_cheack == user_password): 
        #User kirgandan song 
        print("\t\t\tBosh menyu\n")
        print("Sms xabarni ulash, almashtirish[1].\tParolni o'zgartirish[2].\n")
        print("Hisobni tekshirish[3].\tPul yechib olish[4].\n")
        tanlov = int(input(">>> "))
        if(tanlov == 1):
            print(f"Sizning avvalgi raqamingiz: +998{user_number}\n")
            new_number = int(input("Yangi raqamni kiriting: +998"))
            user_number = new_number
            print("Ulash muvaffaqiyatli amalga oshdi.\tSalomat bo'ling.")
        elif(tanlov == 2):
            re_password = int(input("Iltimos avvalgi parolni kiriting: "))
            if re_password == user_password:
                new_password = int(input("Iltimos yangi parolni kiriting: "))
                user_password = new_password
                print("Sizning parolingiz o'zgartirildi. Xayr salomay bo'ling.")
            else:
                print("Parolni xato kiritdingiz Kartangiz bizda qoladi. Xayr.")
        elif (tanlov == 3): 
            print(f"Sizning hisobingizda {balance} so'm mavjud.\n")
            print("Xayr Salomat bo'ling.")
        elif(tanlov == 4):
            pul_yechim = int(input("Summani kiriting: "))
            if pul_yechim < balance:
                balance = balance - pul_yechim
                print(f"Sizning hisobingizda {balance} so'm mablag' qoldi.\n")
                print("Xayr Salomat bo'ling.")
            else:
                print("Kechirasiz sizning hisobingizda mablag' yetarli emas.")
        else:
            print("Bizda bunaqa bo'lim mavjud emas. Xayr salomat bo'ling.")
# INGLIZ TILI TANLANGANDA
elif( til_sorov == 2 ):
    password_cheack = int(input("Please enter the password: "))
    if (password_cheack != user_password):
        password_try = password_try + 1
        password_cheack = int(input("Pleas check your password and enter again: "))
    if (password_cheack != user_password and password_try < 2):
        password_try = password_try + 1
        password_cheack = int(input("Pleas check your password and enter again: "))
    if (password_cheack != user_password and password_try < 2 ):
        password_try = password_try + 1
    if password_try == 2:
        print("Your card is taken by the company for a crime sign.\n")
    elif(password_cheack == user_password):
        #User kirgandan song 
        print("\t\t\tMain Menyu\n")
        print("Connecting phone number or changing[1].\tChange your password[2].\n")
        print("Check your balance[3].\tWithdraw some money[4].\n")
        tanlov = int(input(">>> "))
        if(tanlov == 1):
            print(f"Your previous phone number was: +998{user_number}\n")
            new_number = int(input("Enter your new phone number: +998"))
            user_number = new_number
            print("Your proccess complited.\tSee you soon.")
        elif(tanlov == 2):
            re_password = int(input("Pleas enter the previous password: "))
            if re_password == user_password:
                new_password = int(input("enter the new password: "))
                user_password = new_password
                print("Your password has changed. See you soon.")
            else:
                print("You have entered a wrong password. Your card is taken by us.")
        elif (tanlov == 3): 
            print(f"Your balance is {balance} so'm.\n")
            print("Thank you see you soon.")
        elif(tanlov == 4):
            pul_yechim = int(input("enter the amount of money: "))
            if pul_yechim < balance:
                balance = balance - pul_yechim
                print(f"Your balance now {balance} so'm.\n")
                print("Thank you see you soon.")
            else:
                print("Sorry you do not have enough money to withdraw.")
        else:
            print("Sorry we do not have like this catigorie. BYE")
else:   
    print("Siz noto'g'ri tilni tanladingiz iltimos tekshirib boshqattan kiriting.\n")
    print("Please you choosed unvalid number. Cheack your number.\n")