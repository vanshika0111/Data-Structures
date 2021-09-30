// program to calculate factorial of a given number

#include<stdio.h>

int factorial(int);
int main()
{
    int number, value;
    printf("Enter the number: ");
    scanf("%d", &number);
    value = factorial(number);
    printf("Factorial of %d is %d \n", number, value);

    return 0;
}

int factorial(int number)
{
    if(number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}