#include <stdio.h>

int main() {

    char name[50];
    double a, b, result;
    char operator;

    printf("Hi what is your name:");
    scanf(" %s", name );

    printf("Hey %s , Welcome to Faricalc!\n", name );

    printf("Enter your first number:");
    scanf("%lf", &a);

    printf("Enter your second number:");
    scanf("%lf", &b);

    printf("Choose an operator (+,-,*,/,%%) : ");
    scanf(" %c", &operator);

    switch(operator){
        case '+': 
            result= a + b;
            printf("Your answer is:%lf\n", result);
            break;

        case '-':
            result= a - b;
            printf("Your answer is: %lf\n", result);
            break;

        case '*':
            result= a * b;
            printf("Your answer is: %lf\n", result);
            break;

        case '/':
            result= a / b;
            printf("Your answer is: %lf\n", result);
            break;

        case '%':
            int num1 = (int)a;
            int num2 = (int)b;
            int answer = (int)result;
            answer = num1 % num2; 
            printf("Your answer is: %d\n", answer);
            break;

        default:
            printf("Syntax Error");
            break;

    }

    return 0;
}