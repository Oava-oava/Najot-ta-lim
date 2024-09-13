#include <stdio.h>
#include <string.h>

int main() {
    char arr[50] = "Salom";
    char ar[50];
    printf("Birinchi matn: ");
    scanf(" %[^\n]s", arr);

    strcpy(ar, arr);

    printf("Birinchi matn: %s\n", arr);
    printf("Nusxalangan matn: %s\n", ar);

    return 0;
}