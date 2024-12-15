#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    for (int i = 1; i <= a; i++) {
        printf("%d", 2 * i - 1);
        if (i < a) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
