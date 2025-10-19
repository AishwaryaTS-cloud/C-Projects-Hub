// C Program to make a Simple Calculator using switch-case statements
#include <stdio.h>

int main() {
    char op;
    double a, b, res;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // space before %c to clear buffer

    // Read the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);
    
    // Perform operation based on operator
    switch (op) {
    case '+':
        res = a + b;
        printf("Result: %.2lf\n", res);
        break;
    case '-':
        res = a - b;
        printf("Result: %.2lf\n", res);
        break;
    case '*':
        res = a * b;
        printf("Result: %.2lf\n", res);
        break;
    case '/':
        if (b == 0)
            printf("Error! Division by zero is not allowed.\n");
        else {
            res = a / b;
            printf("Result: %.2lf\n", res);
        }
        break;
    default:
        printf("Error! Incorrect Operator Value.\n");
        return 1; // exit program with error code
    }
    
    return 0;
}
