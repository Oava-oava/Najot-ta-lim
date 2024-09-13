#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char ism[20];
    char familiya[20];
    char filiali[20];
    char yonalishi[20];
    int yoshi[20];
    int XP;
    int Kumush;
} oquv;

int main()
{
    system("cls");

    int n;
    printf("N: ");
    scanf("%d", &n);
    oquv urganch[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n\t%d - O'quvchi\n", i + 1);
        printf("Ism: ");
        scanf(" %s", urganch[i].ism);
        printf("Familiya: ");
        scanf(" %s", urganch[i].familiya);
        printf("filali: ");
        scanf(" %s", urganch[i].filiali);
        printf("Yo'nalishi: ");
        scanf(" %s", urganch[i].yonalishi);
        printf("Yoshi: ");
        scanf(" %d", &urganch[i].yoshi);
        printf("Familiya: ");
        scanf(" %d", &urganch[i].XP);
        printf("Kumush: ");
        scanf(" %d", &urganch[i].Kumush);
    }

    for (int i = 0; i < n; i++)
    {
        if (urganch[i].XP > 300)
        {
            printf("\n\t%d - O'quvchi\n", i + 1);
            printf("Ism: %s", urganch[i].ism);
            printf("Familiya: %s", urganch[i].familiya);
            printf("filali: %s", urganch[i].filiali);
            printf("Yo'nalishi: %s", urganch[i].yonalishi);
            printf("Yoshi: %d", urganch[i].yoshi);
            printf("Familiya: %d", urganch[i].XP);
            printf("Kumush: %d", urganch[i].Kumush);
        }
        else
        {
            printf("\nHali Ro'yxatga tushmabsiz :)\n");
        }
    }

    return 0;
}