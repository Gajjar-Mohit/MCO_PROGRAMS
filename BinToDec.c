// Binary to decimal number
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char bin[32] = { 0 };
    int decimal, i;
    int counter; 

    printf("Enter the binary value: ");
    fgets(bin, 10, stdin);

    counter = 0;
    decimal = 0;
    for (i = (strlen(bin) - 1); i >= 0; i--) {
        decimal = decimal + (bin[i] - 0x30) * pow((double)2, (double)counter);
        counter++;
    }

    printf("Decimal val: %d\n", decimal);

    return 0;
}