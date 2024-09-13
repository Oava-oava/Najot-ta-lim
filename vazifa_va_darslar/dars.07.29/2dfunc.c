#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Malumot_Array1(int n, int m, int Arra[n][m])
{
    printf("\n\n\t\tArray:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", Arra[i][j]);
        }
        puts("");
    }
}
int Malumot_Array(int Arra[100][100], int n, int m)
{
    printf("\n\n\t\tArray:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", Arra[i][j]);
        }
        puts("");
    }
}
int main()
{
    system("cls");
    int n, n1;
    printf("Qator Ustun: ");
    scanf("%d%d", &n, &n1);

    int serya[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            serya[i][j] = rand()%50 +1;
        }
        
    }

    Malumot_Array1(serya, n, n1);
    
    return 0;
}