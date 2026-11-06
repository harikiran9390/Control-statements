#include <stdio.h>
main()
{
    int a, b;
    char c;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("Enter + for Addition\nEnter - for Subtraction\nEnter * for Multiplication\nEnter / for Division\n");
    scanf(" %c", &c);
    switch(c)
    {
        case '+':
            printf("Addition = %d", a + b);
            break;
        case '-':
            printf("Subtraction = %d", a - b);
            break;
        case '*':
            printf("Multiplication = %d", a * b);
            break;
        case '/':
            printf("Division = %d", a / b);
            break;
        default:
            printf("Invalid operator");
    }
}

