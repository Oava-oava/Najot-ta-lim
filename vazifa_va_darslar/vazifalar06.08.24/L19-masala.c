#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    // system("cls");
    char input[50];

    printf("Matnni kiriting: ");
    scanf(" %[^\n]s", input);
    int raqam;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (isdigit(input[i]))
        {
            raqam = input[i] - '0';
            if(raqam % 2 == 0) {
                printf("%d  ", raqam);
            }
        }
    }    
    return 0;
}