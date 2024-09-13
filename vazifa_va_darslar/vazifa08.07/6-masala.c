#include <stdio.h>
#include <stdlib.h>
int sum = 0;

void YIg(int son)
{
    int bir = son % 10;
    sum = sum + bir;
    if (son > 0)
    {
        YIg(son / 10);
    }
    else
    {
        printf("Yigindi: %d", sum);
    }
}

int main()
{
    system("cls");
    int n;
    printf("N: ");
    scanf("%d", &n);
    YIg(n);

    return 0;
}