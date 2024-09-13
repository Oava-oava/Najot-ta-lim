#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

struct Ishchi
{
    char ism[25];
    char familiya[25];
    char ish_joyi[50];
    char darajasi[50];
    int yoshi;
    bool Oilasi;
    float maosh;
    int tajribasi;
};

int main()
{
    system("cls");

    puts("");
    struct Ishchi odam1;
    printf("Ism: ");
    scanf("%[^\n]s", odam1.ism);
    printf("Familiya: ");
    scanf("%[^\n]s", odam1.familiya);
    printf("Ish Joyi: ");
    scanf("%[^\n]s", odam1.ish_joyi);
    printf("Darajasi: ");
    scanf("%[^\n]s", odam1.darajasi);
    printf("Yoshi: ");
    scanf("%d", odam1.yoshi);
    printf("Oilaviyligi: ");
    scanf("%d", odam1.Oilasi);
    printf("Maoshi: ");
    scanf("%f", odam1.maosh);
    printf("Tajriba yili: ");
    scanf("%d", odam1.tajribasi);

    puts("");
    printf("\tIshchi ma'lumotlari\n\n");
    printf("Ish joyi: %s", odam1.ism);
    printf("Ish joyi: %s", odam1);
    printf("Ish joyi: %s", odam1.ism);
    printf("Ish joyi: %s", odam1.ism);
    printf("Ish joyi: %s", odam1.ism);
    printf("Ish joyi: %s", odam1.ism);



    return 0;
}