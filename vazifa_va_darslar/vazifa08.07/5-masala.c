#include <stdio.h>
#include <stdlib.h>
void Digit(int a, int b)
{
    if (a < b)
    {
        printf("%d ", a);
        Digit(a + 1, b);
    }
    else if (a > b)
    {
        printf("%d ", a);
        Digit(a - 1, b);
    }
    else
    {
        printf("%d ", a);
    }
}

int main()
{
    system("cls");
    int a, b;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    Digit(a, b);
    printf("\n");

    return 0;
}
