#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int ustun, qator;

    printf("Ustunni kiriting: ");
    scanf("%d", &ustun);
    printf("Qator kiriting: ");
    scanf("%d", &qator);

    int array[ustun][qator];

    for (int i = 0; i < ustun; i++)
    {
        for (int j = 0; j < qator; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    // Kritilgan arrayni chiqarish
    printf("\n\nKiritilgan array\n");
    for (int i = 0; i < ustun; i++)
    {
        for (int j = 0; j < qator; j++)
        {
            printf("%d  ", array[i][j]);
        }
        puts("");
    }

    int katta = array[0][0];
    int kichik = array[0][0];
    int Kichustun = 0;
    int Katustun = 0;
    int Katqator = 0;
    int Kichqator = 0;

    for (int i = 0; i < ustun; i++)
    {
        for (int j = 0; j < qator; j++)
        {
            if (array[i][j] > katta)
            {
                katta = array[i][j];
                Katqator = i;
                Katustun = j;
            }
            if (array[i][j] < kichik)
            {
                kichik = array[i][j];
                Kichqator = i;
                Kichustun = j;
            }
        }
    }

    array[Katustun][Katqator] = kichik;
    array[Kichustun][Kichqator] = katta;
    printf("\n\nAlamshtirilgann array\n\n");
    for (int i = 0; i < ustun; i++)
    {
        for (int j = 0; j < qator; j++)
        {
            printf("%d  ", array[i][j]);
        }
        puts("");
    }

    return 0;
}