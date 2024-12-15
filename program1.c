#include <stdio.h>

int main() {
    double a, b;
    char operation;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("Result: %.2f\n", a + b);
            break;
        case '-':
            printf("Result: %.2f\n", a - b);
            break;
        case '*':
            printf("Result: %.2f\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result: %.2f\n", a / b);
            } else {
                printf("Cant Divide with zero\n");
            }
            break;
        default:
            printf("Invalid operation");
            break;
    }

    return 0;
}