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

// O'rtacha bahoni hisoblash funksiyasi
float ortacha_baho(int baholar[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += baholar[i];
    }
    return (float)sum / n;
}

int main() {
    system("cls");

    Toliblar talabalar[5] = {
        {"Xusanov Jo'rabek", 17, 470000.0, {4, 5, 3, 4, 5}},
        {"Aliyev Anvar", 18, 450000.0, {3, 4, 4, 4, 5}},
        {"Karimov Bekzod", 19, 480000.0, {5, 5, 4, 3, 4}},
        {"Nazarov Dilshod", 20, 460000.0, {4, 4, 4, 4, 4}},
        {"Saidov Eldor", 21, 490000.0, {3, 3, 4, 5, 5}}
    };

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
