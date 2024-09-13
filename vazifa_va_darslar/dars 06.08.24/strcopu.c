#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    system("cls");
    char a [70] = "Dima";
    char b [40] = "Dew";
    char c [10] = " ";

    strcpy(a + 4, c);
    strcpy(a + 5, b);
    puts(a);

    

    return 0;
}