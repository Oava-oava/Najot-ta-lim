#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct {
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

int main() {
    system("cls");

    Toliblar talabalar[5];

    strcpy(talabalar[0].ism_familiya, "Xusanov Jo'rabek");
    talabalar[0].yoshi = 17;
    talabalar[0].stependiyasi = 470000.0;
    talabalar[0].fan_baholari[0] = 4;
    talabalar[0].fan_baholari[1] = 5;
    talabalar[0].fan_baholari[2] = 3;
    talabalar[0].fan_baholari[3] = 4;
    talabalar[0].fan_baholari[4] = 5;

    strcpy(talabalar[1].ism_familiya, "Aliyev Anvar");
    talabalar[1].yoshi = 18;
    talabalar[1].stependiyasi = 450000.0;
    talabalar[1].fan_baholari[0] = 3;
    talabalar[1].fan_baholari[1] = 4;
    talabalar[1].fan_baholari[2] = 4;
    talabalar[1].fan_baholari[3] = 4;
    talabalar[1].fan_baholari[4] = 5;

    strcpy(talabalar[2].ism_familiya, "Karimov Bekzod");
    talabalar[2].yoshi = 19;
    talabalar[2].stependiyasi = 480000.0;
    talabalar[2].fan_baholari[0] = 5;
    talabalar[2].fan_baholari[1] = 5;
    talabalar[2].fan_baholari[2] = 4;
    talabalar[2].fan_baholari[3] = 3;
    talabalar[2].fan_baholari[4] = 4;

    strcpy(talabalar[3].ism_familiya, "Nazarov Dilshod");
    talabalar[3].yoshi = 20;
    talabalar[3].stependiyasi = 460000.0;
    talabalar[3].fan_baholari[0] = 4;
    talabalar[3].fan_baholari[1] = 4;
    talabalar[3].fan_baholari[2] = 4;
    talabalar[3].fan_baholari[3] = 4;
    talabalar[3].fan_baholari[4] = 4;

    strcpy(talabalar[4].ism_familiya, "Saidov Eldor");
    talabalar[4].yoshi = 21;
    talabalar[4].stependiyasi = 490000.0;
    talabalar[4].fan_baholari[0] = 3;
    talabalar[4].fan_baholari[1] = 3;
    talabalar[4].fan_baholari[2] = 4;
    talabalar[4].fan_baholari[3] = 5;
    talabalar[4].fan_baholari[4] = 5;

    printf("O'rtacha bali 4 bo'lgan talabalar:\n");
    for (int i = 0; i < 5; i++) {
        float ortacha = ortacha_baho(talabalar[i].fan_baholari, 5);
        if (ortacha == 4.0) {
            printf("Ism va familiya: %s\n", talabalar[i].ism_familiya);
            printf("Yoshi: %d\n", talabalar[i].yoshi);
            printf("Stipendiyasi: %.2f\n", talabalar[i].stependiyasi);
            printf("Fan baholari: ");
            for (int j = 0; j < 5; j++) {
                printf("%d ", talabalar[i].fan_baholari[j]);
            }
            printf("\n\n");
        }
    }

    return 0;
}
