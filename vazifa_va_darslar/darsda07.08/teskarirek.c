#include <stdio.h>
#include <stdlib.h>
int yig = 0;
int Recrusive1(int start, int stop)
{

    if (start <= stop)
    {
        yig = yig + start;
        Recrusive1(start + 1, stop);
    }
    else
    {
        printf("Javobi: %d", yig);
    }
}
int main()
{
    int n;
    system("cls");
    printf("N: ");
    scanf("%d", &n);
    Recrusive1(1, n);

    return 0;
}