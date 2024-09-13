#include <stdio.h>
#include <stdlib.h>

int printf_Hello()
{
    for (;;)
    {
        printf("Salom Dunyo\n");
    }
}

int Recrusive1(int son)
{
    printf("Bu rekrusiv %d\n", son++);
    Recrusive1(son);
}

int main()
{
    system("cls");
    Recrusive1(1);
    // printf_Hello();

    return 0;
}