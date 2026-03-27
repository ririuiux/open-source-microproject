#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter an equation (e.g. 5 + 3): ");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}