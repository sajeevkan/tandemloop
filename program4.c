#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    int counts[9] = {0};

    for (int i = 0; i < 11; i++) {
        for (int j = 1; j <= 9; j++) {
            if (numbers[i] % j == 0) {
                counts[j - 1]++;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        printf("%d: %d\n", i + 1, counts[i]);
    }

    return 0;
}
