// Write a program to input two numbers and display their sum, difference, product, and quotient;



#include <stdio.h>
#include <stdio.h>

int main(void)
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Sum = %.2f\n", a + b);
    printf("Difference = %.2f\n", a - b);
    printf("Product = %.2f\n", a * b);

    if (b != 0)
        printf("Quotient = %.2f\n", a / b);
    else
        printf("Quotient is not possible (division by zero)\n");

    //return 0;
}
