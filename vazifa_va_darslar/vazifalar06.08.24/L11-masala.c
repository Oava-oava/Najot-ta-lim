#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char malumot[50];

    printf("Matnni kiriting: ");
    scanf("%s[^\n]s", malumot);

    for (int i = 0; i < strlen(malumot); i++)
    {
        if (islower(malumot[i]))
        {
            malumot[i] = toupper(malumot[i]);
        }
        else if (isupper(malumot[i]))
        {
            malumot[i] = tolower(malumot[i]);
        }
    }

    puts(malumot);

    return 0;
}
