#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// USTOZ YOUTUBE DAN KORIB QILDIM UNCHA TUSHUNMADIM LEKIN HAR BIR
// QATOR NIMA QILAYOTGANINI BILAMAN. CHAT GPT EMAS. PASTDA LINKI BOR QAYERDAN KORGANIMNI.

bool TubSon(int n, int i)
{
    if (n <= 1)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else if (n % i == 0)
    {
        return false;
    }
    else if (i >= n / 2)
        return true;
    else
        return TubSon(n, i + 1);
}

int main()
{
    system("cls");
    int n;
    printf("N: ");
    scanf("%d", &n);

    if (TubSon(n, 2))
    {
        printf("%d soni tub son.\n", n);
    }
    else
    {
        printf("%d soni tub son emas.\n", n);
    }

    return 0;
}

// https://www.youtube.com/watch?v=BUNzco2GkBA