#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    system("cls");
    FILE *f = fopen("test4.txt", "r");
    if (f == NULL)
    {
        perror("Faylni ochishda xatolik");
        return 1;
    }

    char aniq_soz[100] = "";
    int index = 0;
    char ch[100];
    bool raqam = false;
    bool harf = false;
    while (fscanf(f, "%s", ch) != EOF)
    {
        strcpy(aniq_soz, ch);
        for (int i = 0; aniq_soz[i] != '\0'; i++)
        {
            if (isdigit(aniq_soz[i]))
            {
                raqam = true;
            }
            if (isalpha(aniq_soz[i]))
            {
                harf = true;
            }
        }
        if (raqam == true && harf == true)
        {
            puts(ch);
        }
        raqam = false;
        harf = false;
    }
    fclose(f);

    return 0;
}
