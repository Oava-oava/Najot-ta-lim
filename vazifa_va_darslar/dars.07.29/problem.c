#include <stdio.h>
#include <stdlib.h>


int main () 
{
  system("cls");

    int row, column;

    printf("Ustunni kiriting: ");
    scanf("%d", &row);
    printf("Qatorni kiriting: ");
    scanf("%d", &column);

    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
        
    }
    // Chiqarish
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%.2d ", array[i][j]);
        }
        puts("");
        
    }
    
    
   


    puts("\n");
    return 0;
}