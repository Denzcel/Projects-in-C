#include <stdio.h>
int main(){

    int num1 = 0;                   // Definitions for user input and output
    int num2 = 0;                   // Chose num as variables for visual simplicity
    int output;
    int minOutput;
    int multOutput;
    float divOutput;
    float remOutput;

    printf("\nEnter first number: ");
    scanf("%d", &num1);             // Allows user to enter information using the keypad

    printf("\nEnter second number: ");
    scanf("%d", &num2);

    output = num1 + num2;           // Definitions for output
    minOutput = num1 - num2;
    multOutput = num1 * num2;
    divOutput = num1 / num2;        // Division sign is /
    remOutput = num1 % num2;        // Remainder sign is %

    printf("\nThe numbers you chose were %d and %d\n", num1, num2);
    printf("The output of the sum is : %d, and the output of the difference is %d\n", output, minOutput);
    printf("The output of the product is : %d, and the output of the quotient is: %.3f\n", multOutput, divOutput);  // Quotient is a float number so use %f
    printf("And the remainder is: %f\n", remOutput);                                                                // Added .3 for decimal placeholders
    return 0;
}
