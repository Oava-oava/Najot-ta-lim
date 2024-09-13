#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    system("cls");
    FILE *f = fopen("test1.txt", "r");
    if (f == NULL)
    {
        perror("Faylni ochishda xatolik");
        return 1;
    }

    char aniq_soz[200] = "";
    int index = 0;
    char ch;
    while (fscanf(f, "%c", &ch) != EOF)
    {
        if (isalpha(ch))
        {
            aniq_soz[index++] = ch;
        }
        else if (isspace(ch) || isdigit(ch) || ispunct(ch))
        {
            aniq_soz[index] = '\0';
            if (strlen(aniq_soz)  >= 4) 
            {
                puts(aniq_soz);
            }
            index = 0;
        }
    }
    fclose(f);

    return 0;
}