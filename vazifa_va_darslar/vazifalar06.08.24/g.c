#include <stdio.h>
#include <ctype.h>

int main() {
    char matn[100];
    printf("Matn kiriting: ");
    scanf(" %[^\n]s", matn);

    int start = -1, end = -1;
    for (int i = 0; matn[i] != '\0'; i++) {
        if (isdigit(matn[i])) {
            if (start == -1) {
                start = i;
            }
            end = i;
        }
    }

    if (start != -1 && end != -1 && start != end) {
        for (int i = start + 1; i < end; i++) {
            printf("%c", matn[i]);
        }
        printf("\n");
    } else {
        printf("Matnda raqamlar orasida so'z topilmadi.\n");
    }

    return 0;
}