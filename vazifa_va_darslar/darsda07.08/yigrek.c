#include <stdio.h>
#include <stdlib.h>

int Recrusive1(int start, int stop)
{
    if (start < stop)
    {
        Recrusive1(start + 1, stop);
    }  
    printf("%d\n", start);
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