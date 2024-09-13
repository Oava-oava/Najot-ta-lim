#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char ismi[20];
    float stependiyasi;
    int kursi;

} Toliblar;

bool Ism_Uzunligi(char ism[]);

int main()
{
    system("cls");
    Toliblar talaba1, talaba2, talaba3, talaba4, talaba5, talaba6, talaba7;
    strcpy(talaba1.ismi, "Jo'rabek");
    talaba1.stependiyasi = 470000.0;
    talaba1.kursi = 3;

    strcpy(talaba2.ismi, "Xon");
    talaba2.stependiyasi = 560000.0;
    talaba2.kursi = 2;

    strcpy(talaba3.ismi, "Beki");
    talaba3.stependiyasi = 544000.0;
    talaba3.kursi = 3;

    strcpy(talaba4.ismi, "Olmaxon");
    talaba4.stependiyasi = 560000.0;
    talaba4.kursi = 4;

    strcpy(talaba5.ismi, "Xakimbek");
    talaba5.stependiyasi = 560000.0;
    talaba5.kursi = 7;

    strcpy(talaba6.ismi, "Cho'lponoy");
    talaba6.stependiyasi = 560000.0;
    talaba6.kursi = 2;

    strcpy(talaba7.ismi, "Bek");
    talaba7.stependiyasi = 760000.0;
    talaba7.kursi = 2;

    Toliblar talabalar[7] =
        {
            talaba1,
            talaba2,
            talaba3,
            talaba4,
            talaba5,
            talaba6,
            talaba7};

    for (int i = 0; i < 7; i++)
    {
        bool javob = Ism_Uzunligi(talabalar[i].ismi);
        if (javob && talabalar[i].kursi == 2)
        {
            printf("Ismi: %s\n", talabalar[i].ismi);
            printf("Stependiyasi: %2.f\n", talabalar[i].stependiyasi);
            printf("Kursi: %d", talabalar[i].kursi);
            printf("\n\n");
        }
    }
    

    return 0;
}

bool Ism_Uzunligi(char ism[])
{
    int sanoq = 0;
    for (int i = 0; ism[i] != '\0'; i++)
    {
        sanoq++;
    }
    if (sanoq < 5)
    {
        return true;
    }
    else
    {
        return false;
    }
}