#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char ism_familiya[20];
    int yoshi;
    float stependiyasi;
    int fan_baholari[5];

} Toliblar;

float ortacha_baho(int baholar[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += baholar[i];
    }
    return (float)sum / n;
}

int main()
{
    system("cls");

    Toliblar talaba1, talaba2, talaba3, talaba4, talaba5;

    strcpy(talaba1.ism_familiya, "Xusanov Jo'rabek");
    talaba1.yoshi = 17;
    talaba1.stependiyasi = 470000.0;
    talaba1.fan_baholari[0] = 4;
    talaba1.fan_baholari[1] = 5;
    talaba1.fan_baholari[2] = 3;
    talaba1.fan_baholari[3] = 4;
    talaba1.fan_baholari[4] = 5;

    strcpy(talaba2.ism_familiya, "Aliyev Anvar");
    talaba2.yoshi = 18;
    talaba2.stependiyasi = 450000.0;
    talaba2.fan_baholari[0] = 3;
    talaba2.fan_baholari[1] = 4;
    talaba2.fan_baholari[2] = 4;
    talaba2.fan_baholari[3] = 4;
    talaba2.fan_baholari[4] = 5;

    strcpy(talaba3.ism_familiya, "Karimov Bekzod");
    talaba3.yoshi = 19;
    talaba3.stependiyasi = 480000.0;
    talaba3.fan_baholari[0] = 5;
    talaba3.fan_baholari[1] = 5;
    talaba3.fan_baholari[2] = 4;
    talaba3.fan_baholari[3] = 3;
    talaba3.fan_baholari[4] = 4;

    strcpy(talaba4.ism_familiya, "Nazarov Dilshod");
    talaba4.yoshi = 20;
    talaba4.stependiyasi = 460000.0;
    talaba4.fan_baholari[0] = 4;
    talaba4.fan_baholari[1] = 4;
    talaba4.fan_baholari[2] = 4;
    talaba4.fan_baholari[3] = 4;
    talaba4.fan_baholari[4] = 4;

    strcpy(talaba5.ism_familiya, "Saidov Eldor");
    talaba5.yoshi = 21;
    talaba5.stependiyasi = 490000.0;
    talaba5.fan_baholari[0] = 3;
    talaba5.fan_baholari[1] = 3;
    talaba5.fan_baholari[2] = 4;
    talaba5.fan_baholari[3] = 5;
    talaba5.fan_baholari[4] = 5;

    Toliblar talabalar[5] = {talaba1, talaba2, talaba3, talaba4, talaba5};

    printf("O'rtacha bali 4 bo'lgan talabalar:\n");
    for (int i = 0; i < 5; i++)
    {
        float ortacha = ortacha_baho(talabalar[i].fan_baholari, 5);
        if (ortacha == 4.0)
        {
            printf("Ism va familiya: %s\n", talabalar[i].ism_familiya);
            printf("Yoshi: %d\n", talabalar[i].yoshi);
            printf("Stipendiyasi: %.2f\n", talabalar[i].stependiyasi);
            printf("Fan baholari: ");
            for (int j = 0; j < 5; j++)
            {
                printf("%d ", talabalar[i].fan_baholari[j]);
            }
            printf("\n\n");
        }
    }

    return 0;
}