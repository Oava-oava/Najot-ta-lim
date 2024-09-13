#include <stdio.h>
#include <stdlib.h>

void ToqSonlar(int son)
{
    son = son -1;
    if (son > 0)
    {
        ToqSonlar(son);
        if (son % 2 != 0)
        {
            printf("%d\n", son);
        }
    }
}

int main()
{
    system("cls");
    int n;
    printf("N: ");
    scanf("%d", &n);
    ToqSonlar(n);

    return 0;
}