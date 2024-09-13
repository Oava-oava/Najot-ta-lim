#include <stdio.h>
#include <stdlib.h>
int sum = 0;
int k;
int Factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
    return n * Factorial(n - 1);
}

int main()
{
    system("cls");
    int n;
    printf("N: ");
    scanf("%d", &n);
    int javob = Factorial(n);
    printf("%d ning facotriali  %d", n, javob);

    return 0;
}