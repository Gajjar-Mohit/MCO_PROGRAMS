// octal to decimal

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char oct[32] = { 0 };
    int dec, i;
    int cnt; 

    printf("Enter octal value: ");
    fgets(oct, 10, stdin);

    cnt = 0;
    dec = 0;
    for (i = (strlen(oct) - 1); i >= 0; i--) {
        dec = dec + (oct[i] - 0x30) * pow((double)8, (double)cnt);
        cnt++;
    }

    printf("DECIMAL value is: %d\n", dec);

    return 0;
}
