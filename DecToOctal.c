// Decimal to octal
#include <stdio.h>

int main()
{
    int number, counter, i;
    int oct[32];

    printf("Enter the decimal number: ");
    scanf("%d", &number);

    counter = 0;
    while (number > 0) {
        oct[counter] = number % 8;
        number = number / 8;
        counter++;
    }

   
    printf("Octal val: ");
    for (i = (counter - 1); i >= 0; i--)
        printf("%d", oct[i]);

    return 0;
}