#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, n1;
    printf("Qator Ustun: ");
    scanf("%d%d", &n, &n1);
    int serya[n][n1];

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            serya[i][j] = rand() %50 + 1;
        }
    }
    
    puts("\nNatija:  ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("%2d ", serya[i][j]);
        }
        puts("");
    }
    puts("\nKatta:  ");
    int katta = serya[0][0];
    int ustun = 0;
    int qator = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (katta < serya[i][j])
            {
                katta = serya[i][j];
                ustun = i;
                qator = j;
            }
        }
        puts("");
    }
    
    printf("Katta:  %d\n", katta);
    printf("ustun:  %d\n", ustun);
    printf("qator:  %d\n", qator);
    return 0;
}