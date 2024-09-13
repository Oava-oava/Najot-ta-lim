#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Rekrusiv_f(char matn[], int size)
{
    printf("%c", matn[size]);
    if (strlen(matn) > size)
    {
        Rekrusiv_f(matn, size + 1);
    }
    
}

int main()
{
    char matn[100];
    printf("Matn: ");
    gets(matn);
    Rekrusiv_f(matn, 0);
    
    return 0;
}