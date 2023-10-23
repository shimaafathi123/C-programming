#include <stdio.h>

double performOperation(char operation, double num1, double num2) {
    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return -1.0;
            }
            break;
        default:
            printf("Error: Invalid operation. Please use +, -, *, or /.\n");
            return -1.0;
    }

    return result;
}

int main() {
    char operation;
    double num1, num2, result;

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    result = performOperation(operation, num1, num2);

    if (result != -1.0) {
        printf("Result: %lf\n", result);
    }

    return 0;
}
