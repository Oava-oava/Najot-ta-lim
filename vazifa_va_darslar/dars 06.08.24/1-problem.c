#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    system("cls");
    char arr1[50];
    char arr2[50];

    scanf("%s[^\n]s", arr1);
    scanf("%s[^\n]s", arr2);

    for (int i = 0; i < strlen(arr1); i++)
    {
        if (arr1[i] == arr2[i])
        {
            printf("teng\n");
        }
        else
        {
            printf("%d ta\n", arr2[i] - arr1[i]);
        }
    }

    return 0;
}