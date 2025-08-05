#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, discriminant, root1, root2, realpart, imaginarypart;
    printf("Enter the 3 coefficient:");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0)
    {
        root1 = (-b - sqrt(discriminant)) / (2 * a);
        root2 = (-b + sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:%.2f and %.2f", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("Roots are real and same : %.2f", root1);
    }
    else if (discriminant < 0)
    {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex %.2f+%.2fi and %.2f-%.2fi",realpart,imaginarypart,realpart,imaginarypart);
    }

    return 0;
}