#include <stdio.h>
void oddoreven()
{
//int main() {
    int num;

    // Ask the user to input a number
    printf("\n====================================\n")
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is odd or even
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}

