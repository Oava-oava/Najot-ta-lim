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


int main()
{
    system("cls");
    Toliblar talaba1, talaba2, talaba3, talaba4, talaba5, talaba6, talaba7;
    strcpy(talaba1.ismi, "Jo'rabek");
    talaba1.stependiyasi = 300.0;
    talaba1.kursi = 3;

    strcpy(talaba2.ismi, "Xon");
    talaba2.stependiyasi = 300.0;
    talaba2.kursi = 2;

    strcpy(talaba3.ismi, "Beki");
    talaba3.stependiyasi = 500.0;
    talaba3.kursi = 3;

    strcpy(talaba4.ismi, "Olmaxon");
    talaba4.stependiyasi = 560000.0;
    talaba4.kursi = 4;

    strcpy(talaba5.ismi, "Xakimbek");
    talaba5.stependiyasi = 560000.0;
    talaba5.kursi = 7;

    strcpy(talaba6.ismi, "Cho'lponoy");
    talaba6.stependiyasi = 300.0;
    talaba6.kursi = 2;

    strcpy(talaba7.ismi, "Bek");
    talaba7.stependiyasi = 500.0;
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

    float sum;
    for (int i = 0; i < 7; i++)
    {
        if (talabalar[i].kursi == 2)
        {
            sum = sum + talabalar[i].stependiyasi;
               
        }
        
    }

    printf("\n\nUmumiy hisobda 2-kurs talabalari uchun to'langan mablag'\n\n");
    printf("%.2f so'mni tashkil etadi.\n", sum);
    
    

    return 0;
}
