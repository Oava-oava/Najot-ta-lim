#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

struct Kitob
{
    char nomi[25];
    char muallif[20];
    int varoq_soni;
    float narxi;
};

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

    int son = 132;
    int sonlar[5] = {1, 2, 3, 4, 5};
    struct Kitob k1 = {"HammaJim", "Ozimman", 10, 1000.00};

    printf("int son: %d\n", son);
    printf("int sonlar[3]: %d\n\n", sonlar[3]);

    printf("\tStruct Malumotlari\n\n");
    printf("Kitob Nomi: %s\n", k1.nomi);
    printf("Kitob Muallifi: %s\n", k1.muallif);
    printf("Kitob Varoq Soni: %d\n", k1.varoq_soni);
    printf("Kitob Narxi: %3.f\n", k1.narxi);


    
    struct  Kitob k2;
    strcpy(k2.nomi, "Xamsa");
    strcpy(k2.muallif, "Alisher Navoiy");
    k2.varoq_soni = 350;
    k2.narxi = 500000.909;

    printf("\nXamsa Asari.\n\n");
    printf("Kitob Nomi: %s\n", k2.nomi);
    printf("Kitob Muallifi: %s\n", k2.muallif);
    printf("Kitob Varoq Soni: %d\n", k2.varoq_soni);
    printf("Kitob Narxi: %3.f\n", k2.narxi);

    puts("");
    struct Kitob k3;
    printf("Kitob Nomi: "); scanf(" %[^\n]s", k3.nomi);
    printf("Kitob Muallifi: "); scanf(" %[^\n]s", k3.muallif);
    printf("Kitob Varoq Soni: "); scanf("%d", &k3.varoq_soni);
    printf("Kitob Narxi: "); scanf("%f", &k3.narxi) ;

    printf("\nKiritilgan Ma'lumotlar\n\n");
    printf("Kitob Nomi: %s\n", k3.nomi);
    printf("Kitob Muallifi: %s\n", k3.muallif);
    printf("Kitob Varoq Soni: %d\n", k3.varoq_soni);
    printf("Kitob Narxi: %3.f\n", k3.narxi);


    return 0;
}