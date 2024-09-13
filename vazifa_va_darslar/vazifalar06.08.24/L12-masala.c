#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char input[50];

    printf("Matnni kiriting: ");
    scanf("%s[^\n]s", input);

    for (int i = 0; i < strlen(input); i++)
    {
        if (isupper(input[i]))
        {
            input[i] = '*';
        }
        
    }

    puts(input);

    return 0;
}
