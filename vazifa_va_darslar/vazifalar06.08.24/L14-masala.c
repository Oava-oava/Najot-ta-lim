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
    int start = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (isupper(input[i]))
        {
            start = i + 1;
            break;
        }
    }
    puts("\nKatta harfdan kichik harfgacha bo'lgan matn.\n");

    for (int i = start; i < strlen(input); i++)
    {
        if (islower(input[i]))
        {
            break;
        }
        printf("%c", input[i]);
        
    }
    return 0;
}