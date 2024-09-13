#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    FILE *f = fopen("test4.txt", "r");
    if (f == NULL)
    {
        perror("Faylni ochishda xatolik");
        return 1;
    }

    char aniq_soz[100] = "";
    int index = 0;
    char ch;
    bool raqam_bor = false;

    while (fscanf(f, "%c", &ch) != EOF)
    {
        if (isalpha(ch) || isdigit(ch)) // Agar belgi harf yoki raqam bo'lsa
        {
            aniq_soz[index++] = ch;
            if (isdigit(ch)) // Agar belgi raqam bo'lsa
            {
                raqam_bor = true; // Raqam borligini belgilash
            }
        }
        else if (isspace(ch) || ispunct(ch)) // Agar belgi bo'sh joy yoki tinish belgisi bo'lsa
        {
            if (index > 0) // Agar so'z uzunligi 0 dan katta bo'lsa
            {
                aniq_soz[index] = '\0'; // So'zning oxirini belgilash
                if (raqam_bor) // Agar so'zda raqam bo'lsa
                {
                    printf("%s\n", aniq_soz); // So'zni chop etish
                }
                index = 0; // Yangi so'z uchun indeksni qayta boshlash
                raqam_bor = false; // Raqam borligini qayta boshlash
            }
        }
    }

    // Fayl oxiridagi so'zni tekshirish
    if (index > 0)
    {
        aniq_soz[index] = '\0';
        if (raqam_bor)
        {
            printf("%s\n", aniq_soz);
        }
    }

    fclose(f); // Faylni yopish

    return 0;
}
