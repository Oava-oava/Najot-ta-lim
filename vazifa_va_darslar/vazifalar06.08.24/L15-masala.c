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
        if (isspace(input[i]))
        {
            soni++;
        }
        harf++;
    }
    printf("kiritilgan seriyada %d ta so'z\n%d ta harf bor\n", soni, harf);

    return 0;
}