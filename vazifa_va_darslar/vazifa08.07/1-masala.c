#include <stdio.h>
#include <stdlib.h>

int TeskariJuft(int son)
{
    son = son - 1;
    if (son % 2 == 0)
    {
        printf("%d\n", son);
    }
    if (son > 1)
    {
        TeskariJuft(son);
    }
}

int main()
{
    system("cls");
    int n;
    printf("N: ");
    scanf("%d", &n);
    TeskariJuft(n);

    return 0;
}