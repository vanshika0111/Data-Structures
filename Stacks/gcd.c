// program to calculate GCD of two numbers using recursive function

#include<stdio.h>

int gcd(int, int);
int main()
{
    int number1, number2, result;

    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);

    result = gcd(number1, number2);
    printf("GCD of %d and %d is %d \n", number1, number2, result);

    return 0;
}

int gcd(int n1, int n2)
{
    int remainder;
    remainder = n1 % n2;
    if(remainder == 0)
    {
        return n2;
    }
    else
    {
        return (gcd(n2, remainder));
    }
}