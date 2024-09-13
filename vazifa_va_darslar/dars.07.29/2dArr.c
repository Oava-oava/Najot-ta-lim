#include <stdio.h>
#include <stdlib.h>


int main () 
{
  system("cls");
    int massiv[3][3] = {{3,3, 3} ,{4, 4, 4}, {5, 5, 5}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", massiv[i][j]);
        }
        puts("");
    }
    
    puts("\n");
    return 0;
}