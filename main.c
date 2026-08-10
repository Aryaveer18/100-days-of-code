//Q1: Write a program to input two numbers and display their sum.


#include<stdio.h>

int main(void)
{
    int a, b, sum;
     
    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter thr second number:");
    scanf("%d", &b);
    sum = a+b;
    printf("The sum of %d and %d is %d\n",a,b,sum);
    //return0;
}
