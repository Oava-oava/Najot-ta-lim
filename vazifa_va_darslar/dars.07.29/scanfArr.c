#include <stdio.h>
#include <stdlib.h>


int main () 
{
  system("cls");
    int array[3][3];
    for (int i = 0; i < array ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", array[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", array[i][j]);
        }
        puts("");
    }


    
    
    puts("\n");
    return 0;
}