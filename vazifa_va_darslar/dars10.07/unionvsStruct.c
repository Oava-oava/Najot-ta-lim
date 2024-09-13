#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct A
{
    double son;
    char s[20];
}a;

union B
{
    double d;
    char h;
}b;


int main()
{   
    system("cls");
    printf("S: %d\n", sizeof(a));
    printf("U: %d\n", sizeof(b));

    b.h = '4';
    printf("\nU:  %c\n", b.h);
    b.d = 131245.234;
    printf("\nU:  %lf\n", b.d);
    printf("\nU:  %c", b.h);

    return 0;
}