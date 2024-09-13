#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    system("cls");
    char a [70] = "Salom";
    char b [40] = "Qalaysan";
    char g[20] = "";
    char v[5] = " ";

    for (int i = 0; i < 5; i++)
    {
        g[i] = b[i];
    }
    
    strcpy(a + 5, v);
    strcpy(a + 6, g);
    puts(a);

    char aa[60] = "Salom  ";
    char bb[35] = "Qalaysan";

    strncpy(aa + 6, bb, 5);
    puts(a);

    return 0;
}