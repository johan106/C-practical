#include <stdio.h>
int main()
{
    int a, b, operator;
    printf("Enter values of a and b:");
    scanf("%d %d", &a, &b);
    printf("Enter your choice:\n1.Addition\n 2.substration\n 3.Multiplication\n 4. division\n");
    scanf("%d", &operator);
    switch (operator)
    {
    case 1:
    printf("The addition of %d and %d is %d", a, b, a + b);
    break;

    case 2:
    printf("The substraction of %d and %d is %d", a, b, a - b);
    break;
    case 3:
     printf("The multiplication of %d and %d is %d", a, b, a * b);
    break;
    case 4:
     printf("The Division of %d and %d is %d", a, b, a / b);
    break;
    }
    return 0;
}