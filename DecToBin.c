// Decimal number to binary
#include <stdio.h>

int main()
{
    int number, counter, i;
    int binary[32];

    printf("Enter decimal number: ");
    scanf("%d", &number);

    counter = 0;
    while (number > 0)
    {
        binary[counter] = number % 2;
        number = number / 2;
        counter++;
    }
    printf("Binary value :");
    for (i = (counter - 1); i >= 0; i--)
        printf("%d", binary[i]);
    printf("\n");
    return 0;
}
