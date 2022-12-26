
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char oct[32] = { 0 };
    int decimal, i;
    int counter; 

    printf("Enter the octal value: ");
    gets(oct);

    counter = 0;
    decimal = 0;
    for (i = (strlen(oct) - 1); i >= 0; i--) {
        decimal = decimal + (oct[i] - 0x30) * pow((double)8, (double)counter);
        counter++;
    }

    printf("Decimal val: %d", decimal);

    return 0;
}
