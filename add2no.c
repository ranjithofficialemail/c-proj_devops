#include <stdio.h>
void add2no()
{
//int main() {
    int num1, num2, sum;

    // Ask the user to input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);
    printf("*****END OF THE C PROJECT*****\n");
    return 0;
}

