#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int son = 123;
    int sonlar[5] = {1, 2, 3, 4, 5};
    int sonSonlar[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Son ==> %d", son);
    printf("Array Bir olchov ==> %d", sonlar[0]);
    printf("Array Bir olchov ==> %d", sonSonlar[2][2]);

    puts("\nBir o'lchovli array  ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", sonlar[i]);
    }

    puts("\nIkki o'lchovli array   ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sonSonlar[i][j]);
        }
        puts("\n");    
    }
    

    return 0;
}