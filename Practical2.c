#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void binToDec();
void binToHex();
void binToOct();
void decToBin();
void decToHex();
void decToOct();
void hexToBin();
void hexToDec();
void octToBin();
void octToDec();

int main()
{
    printf("Select number from 0 to 10\n");
    printf("1. Binary to decimal\n");
    printf("7. Binary to octal\n");
    printf("2. Octal to decimal\n");
    printf("3. Hexadecimal to decimal\n");
    printf("4. Decimal to binary\n");
    printf("5. Decimal to octal\n");
    printf("6. Decimal to hexadecimal\n");
    printf("8. Octal to binary\n");
    printf("9. Binary to hexadecimal\n");
    printf("10. Hexadecimal to binary\n");
    printf("0. Exit\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        binToDec();
        break;

    case 2:
        octToDec();
        break;

    case 3:
        hexToDec();
        break;

    case 4:
        decToBin();
        break;

    case 5:
        decToOct();
        break;

    case 6:
        decToHex();
        break;

    case 7:
        binToOct();
        break;

    case 8:
        octToBin();
        break;

    case 9:
        binToHex();
        break;

    case 10:
        hexToBin();
        break;
    case 0:
        exit(0);
        break;
    default:
        break;
    }
    return 0;
}

void binToDec()
{
    char bin[32] = {0};
    int decimal, i;
    int counter;

    printf("Enter the binary value: ");
    fgets(bin, 10, stdin);

    counter = 0;
    decimal = 0;
    for (i = (strlen(bin) - 1); i >= 0; i--)
    {
        decimal = decimal + (bin[i] - 0x30) * pow((double)2, (double)counter);
        counter++;
    }

    printf("Decimal val: %d", decimal);
}

void binToHex()
{
    int binaryNumber = 0;
    int hexNumber = 0;
    int i = 1;
    int rem = 0;

    printf("Enter binary number: ");
    scanf("%d", &binaryNumber);

    while (binaryNumber != 0)
    {
        rem = binaryNumber % 10;
        hexNumber = hexNumber + rem * i;

        i = i * 2;
        binaryNumber = binaryNumber / 10;
    }

    printf("Hexadecimal Number: %X", hexNumber);
}

void binToOct()
{
    int binaryNumber = 0;
    int octalNumber = 0;
    int i = 1;
    int rem = 0;

    printf("Enter binary number: ");
    scanf("%d", &binaryNumber);

    while (binaryNumber != 0)
    {
        rem = binaryNumber % 10;
        octalNumber = octalNumber + rem * i;

        i = i * 2;
        binaryNumber = binaryNumber / 10;
    }

    printf("Octal Number: %o", octalNumber);
}

void decToBin()
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
}

void decToHex()
{
    int number, cnt, i;
    char hex[32];

    printf("Enter decimal number: ");
    scanf("%d", &number);

    cnt = 0;
    while (number > 0)
    {
        switch (number % 16)
        {
        case 10:
            hex[cnt] = 'A';
            break;
        case 11:
            hex[cnt] = 'B';
            break;
        case 12:
            hex[cnt] = 'C';
            break;
        case 13:
            hex[cnt] = 'D';
            break;
        case 14:
            hex[cnt] = 'E';
            break;
        case 15:
            hex[cnt] = 'F';
            break;
        default:
            hex[cnt] = (number % 16) + 0x30;
        }
        number = number / 16;
        cnt++;
    }

    printf("Hexadecimal value is: ");
    for (i = (cnt - 1); i >= 0; i--)
        printf("%c", hex[i]);
}

void decToOct()
{
    int number, counter, i;
    int oct[32];

    printf("Enter the decimal number: ");
    scanf("%d", &number);

    counter = 0;
    while (number > 0)
    {
        oct[counter] = number % 8;
        number = number / 8;
        counter++;
    }

    printf("Octal val: ");
    for (i = (counter - 1); i >= 0; i--)
        printf("%d", oct[i]);
}

void hexToBin()
{
    char HexNum[32] = {0};
    int i = 0;

    printf("Enter the Hexadecimal number: ");
    scanf("%s", HexNum);

    printf("Binary Number: ");

    while (HexNum[i])
    {
        switch (HexNum[i])
        {
        case '0':
            printf("0000");
            break;

        case '1':
            printf("0001");
            break;

        case '2':
            printf("0010");
            break;

        case '3':
            printf("0011");
            break;

        case '4':
            printf("0100");
            break;

        case '5':
            printf("0101");
            break;

        case '6':
            printf("0110");
            break;

        case '7':
            printf("0111");
            break;

        case '8':
            printf("1000");
            break;

        case '9':
            printf("1001");
            break;

        case 'a':
        case 'A':
            printf("1010");
            break;

        case 'b':
        case 'B':
            printf("1011");
            break;

        case 'c':
        case 'C':
            printf("1100");
            break;

        case 'd':
        case 'D':
            printf("1101");
            break;

        case 'e':
        case 'E':
            printf("1110");
            break;

        case 'f':
        case 'F':
            printf("1111");
            break;

        default:
            printf("\nInvalid hexa digit: %c", HexNum[i]);
        }
        i++;
    }
}

void hexToDec()
{
    char hex[32] = {0};
    int dec, i;
    int cnt;
    int dig;

    printf("Enter hex value: ");

    fgets(hex, 10, stdin);

    cnt = 0;
    dec = 0;
    for (i = (strlen(hex) - 1); i >= 0; i--)
    {
        switch (hex[i])
        {
        case 'A':
            dig = 10;
            break;
        case 'B':
            dig = 11;
            break;
        case 'C':
            dig = 12;
            break;
        case 'D':
            dig = 13;
            break;
        case 'E':
            dig = 14;
            break;
        case 'F':
            dig = 15;
            break;
        default:
            dig = hex[i] - 0x30;
        }
        dec = dec + (dig)*pow((double)16, (double)cnt);
        cnt++;
    }

    printf("DECIMAL value is: %d", dec);
}
void octToBin()
{
    char octalNum[32];
    int i = 0;

    printf("Enter octal number: ");
    scanf("%s", octalNum);

    printf("Binay number: ");
    while (octalNum[i])
    {
        switch (octalNum[i])
        {
        case '0':
            printf("000");
            break;

        case '1':
            printf("001");
            break;

        case '2':
            printf("010");
            break;

        case '3':
            printf("011");
            break;

        case '4':
            printf("100");
            break;

        case '5':
            printf("101");
            break;

        case '6':
            printf("110");
            break;

        case '7':
            printf("111");
            break;

        default:
            printf("\nInvalid octal number");
        }
        i++;
    }
}
void octToDec()
{
    char oct[32] = {0};
    int dec, i;
    int cnt;

    printf("Enter octal value: ");

    fgets(oct, 10, stdin);

    cnt = 0;
    dec = 0;
    for (i = (strlen(oct) - 1); i >= 0; i--)
    {
        dec = dec + (oct[i] - 0x30) * pow((double)8, (double)cnt);
        cnt++;
    }

    printf("DECIMAL value is: %d", dec);
}