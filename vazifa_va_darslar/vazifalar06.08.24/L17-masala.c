#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    system("cls");
    char input[50];

    printf("Matnni kiriting: ");
    scanf(" %[^\n]s", input);
    int soni = 1;
    int harf = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == 'I' || input[i] == 'E' || input[i] == 'A' || input[i] == 'O'
        || input[i] == 'U')
        {
            printf("%c  ", input[i]);
        }
        
    }

    return 0;
}