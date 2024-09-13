#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    system("cls");
    char a [10] = "salom", b[10] = "nima gap";
    strcat(a, " ");
    strcat(a, b);
    puts(a);

    return 0;
}