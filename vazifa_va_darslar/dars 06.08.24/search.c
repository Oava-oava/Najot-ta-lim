#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    system("cls");
    char arr1[50] = "aa";
    char arr2[50] = "ab";

    int n = strncmp(arr1, arr2, 3);

    printf("farqi n: %d\n", n);


    char a[10] = "aa", b[10] = "ab";
    int h = strcmp(a, b);
    printf("farqi h: %d\n", h);


    return 0;
}