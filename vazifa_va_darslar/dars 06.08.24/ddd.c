#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    system("cls");
    char arr[50] = "Salom Axvollar qalay";
    int s = strlen(arr);
    printf("%d\n", s);

    for (int i = 0; i < s; i++)
    {
        printf("%c ", arr[i]);
    }
    puts("///");
    for (int i = 0; i < strlen(arr); i++)
    {
        printf("%c", arr[i]);
    }
    

    return 0;
}