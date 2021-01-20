
#include <stdio.h>
int main() {
    char operator;
    double first, second;                       // Indicates user inputs
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);                     // %c indicates symbol
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator) {                         // Switch depending on case
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator doesn't match any of the cases
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
