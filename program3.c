#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        if (i % 2 == 1) {
            printf("%d", i);
            if (i < a && (i + 2) <= a) {
                printf(", ");
            }
        }
    }

    printf("\n");
    return 0;
}