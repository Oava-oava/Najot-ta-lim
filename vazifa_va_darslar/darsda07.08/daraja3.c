#include <stdio.h>
#include <stdlib.h>

float Darajalar(float a, int b) {
    if (b == 0) {
        // Bazaviy holat: har qanday sonning 0-darajasi 1 ga teng
        return 1;
    } else if (b > 0) {
        // Musbat daraja uchun rekursiv chaqiruv
        printf("Musbat daraja: %f * Darajalar(%f, %d)\n", a, a, b - 1);
        return a * Darajalar(a, b - 1);
    } else {
        // Manfiy daraja uchun rekursiv chaqiruv
        printf("Manfiy daraja: 1 / Darajalar(%f, %d)\n", a, -b);
        return 1 / Darajalar(a, -b);
    }
}

int main() {
    system("cls");
    float a;
    int b;
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%d", &b);
    float javob = Darajalar(a, b);
    printf("Natija: %f\n", javob);

    return 0;
}
