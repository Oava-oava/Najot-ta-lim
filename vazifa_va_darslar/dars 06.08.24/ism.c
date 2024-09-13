#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    system("cls");
    char arr[50];
    char ar[50];
    printf("Birinchi matn:");
    scanf(" %[^\n]s", arr);
    int index = strlen(arr);
    for (int i = 0; i < index; i++)
    {
        ar[i] = arr[i];
    }
    puts(arr);
    puts(ar);
    return 0;
}