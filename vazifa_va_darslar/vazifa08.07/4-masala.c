#include <stdio.h>
#include <stdlib.h>
int sanoq = 1;
int sum = 0;
int digitSum(int son)
{
    sum = sum + sanoq;
    printf("%d ", sanoq);

    if (sanoq < son)
    {
        printf(" + ");
    }
    else if (sanoq == son)
    {
        printf(" = %d", sum);
    }
    
    
    if (sanoq < son)
    {
        sanoq = sanoq + 1;
        digitSum(son);
    }
    
}

int main()
{
    system("cls");
    int n;
    printf("N: ");
    scanf("%d", &n);
    digitSum(n);

    return 0;
}