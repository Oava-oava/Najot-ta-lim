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

    printf("%c", arr[0]);
    return 0;
}