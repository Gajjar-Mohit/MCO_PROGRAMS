#include <iostream>
// #include <stdio.h>
#include <math.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
//temp logics start
void mapping_oct(unordered_map<string, char> *hash)
{
	(*hash)["000"] = '0';
	(*hash)["001"] = '1';
	(*hash)["010"] = '2';
	(*hash)["011"] = '3';
	(*hash)["100"] = '4';
	(*hash)["101"] = '5';
	(*hash)["110"] = '6';
	(*hash)["111"] = '7';
}

void mapping_hex(unordered_map<string, char> *hash)
{
	(*hash)["0000"] = '0';
	(*hash)["0001"] = '1';
	(*hash)["0010"] = '2';
	(*hash)["0011"] = '3';
	(*hash)["0100"] = '4';
	(*hash)["0101"] = '5';
	(*hash)["0110"] = '6';
	(*hash)["0111"] = '7';
	(*hash)["1000"] = '8';
	(*hash)["1001"] = '9';
	(*hash)["1010"] = 'A';
	(*hash)["1011"] = 'B';
	(*hash)["1100"] = 'C';
	(*hash)["1101"] = 'D';
	(*hash)["1110"] = 'E';
	(*hash)["1111"] = 'F';
	
}

// int tempOtoD(string oct)
// {
//     string s=oct;
//     string delimiter = ".";
//     size_t pos = 0;
//     string token;
//     while ((pos = s.find(delimiter)) != std::string::npos)
//     {
//         token = s.substr(0, pos);
//         s.erase(0, pos + delimiter.length());
//     }
//     int i, N, decimal_number = 0, p = 0;
//     float after_decimal = 0, U;
//     U = s.size();
//     N = token.size();
//     for (i = N - 1; i >= 0; i--)
//     {
//         if (token[i] == '1')
//         {
//             decimal_number += pow(8, p);
//         }
//         else if(token[i] == '2')
//         {
//             decimal_number += 2*pow(8, p);
//         }
//         else if(token[i] == '3')
//         {
//             decimal_number += 3*pow(8, p);
//         }
//         else if(token[i] == '4')
//         {
//             decimal_number += 4*pow(8, p);
//         }
//         else if(token[i] == '5')
//         {
//             decimal_number += 5*pow(8, p);
//         }
//         else if(token[i] == '6')
//         {
//             decimal_number += 6*pow(8, p);
//         }
//         else if(token[i] == '7')
//         {
//             decimal_number += 7*pow(8, p);
//         }
//         p++;
//     }
//     p = -1;
//     i = 0;
//     for (i = 0; i <= U - 1; i++)
//     {
//         if (s[i] == '1')
//         {
//             after_decimal += pow(8, p);
//         }
//         else if(s[i] == '2')
//         {
//             after_decimal += 2*pow(8, p);
//         }
//         else if(s[i] == '3')
//         {
//             after_decimal += 3*pow(8, p);
//         }
//         else if(s[i] == '4')
//         {
//             after_decimal += 4*pow(8, p);
//         }
//         else if(s[i] == '5')
//         {
//             after_decimal += 5*pow(8, p);
//         }
//         else if(s[i] == '6')
//         {
//             after_decimal += 6*pow(8, p);
//         }
//         else if(s[i] == '7')
//         {
//             after_decimal += 7*pow(8, p);
//         }
//         p--;
//     }
//     int total = (decimal_number + after_decimal);
//     return total; 
// }
// void tempDtoH(double t1)
// {
//     float a;
//     double c = t1;
//     int b, k, l = 0, m[20], n, i = 0, count = 0, p;
//     b = c;
//     a = c - b;
//     while (b != 0)
//     {
//         n = b % 16;
//         b /= 16;
//         m[i] = n;
//         count += 1;
//         i++;
//     }
//     for (k = count - 1; k >= 0; k--)
//     {
//         if (m[k] >= 10)
//         {
//             if (m[k] == 10)
//                 printf("A");
//             if (m[k] == 11)
//                 printf("B");
//             if (m[k] == 12)
//                 printf("C");
//             if (m[k] == 13)
//                 printf("D");
//             if (m[k] == 14)
//                 printf("E");
//             if (m[k] == 15)
//                 printf("F");
//         }
//         else
//         {
//             printf("%d", m[k]);
//         }
//     }

//     printf(".");
//     for (p = 1; p <= 4; p++)
//     {
//         a = a * 16;
//         l = a;
//         if (l >= 10)
//         {
//             if (l == 10)
//                 printf("A");
//             if (l == 11)
//                 printf("B");
//             if (l == 12)
//                 printf("C");
//             if (l == 13)
//                 printf("D");
//             if (l == 14)
//                 printf("E");
//             if (l == 15)
//                 printf("F");
//         }
//         else
//         {
//             printf("%d", l);
//         }
//         if (l >= 1)
//             a = a - l;
//     }
//     printf("\n");
// }

// int tempHtoD(string hex)
// {
//     string s=hex;
//     string delimiter = ".";
//     size_t pos = 0;
//     string token;
//     while ((pos = s.find(delimiter)) != std::string::npos)
//     {
//         token = s.substr(0, pos);
//         s.erase(0, pos + delimiter.length());
//     }
//     int i, N, decimal_number = 0, p = 0;
//     float after_decimal = 0, U;
//     U = s.size();
//     N = token.size();
//     for (i = N - 1; i >= 0; i--)
//     {
//         if (token[i] == '1')
//         {
//             decimal_number += pow(16, p);
//         }
//         else if(token[i] == '2')
//         {
//             decimal_number += 2*pow(16, p);
//         }
//         else if(token[i] == '3')
//         {
//             decimal_number += 3*pow(16, p);
//         }
//         else if(token[i] == '4')
//         {
//             decimal_number += 4*pow(16, p);
//         }
//         else if(token[i] == '5')
//         {
//             decimal_number += 5*pow(16, p);
//         }
//         else if(token[i] == '6')
//         {
//             decimal_number += 6*pow(16, p);
//         }
//         else if(token[i] == '7')
//         {
//             decimal_number += 7*pow(16, p);
//         }
//         else if(token[i] == '8')
//         {
//             decimal_number += 8*pow(16, p);
//         }
//         else if(token[i] == '9')
//         {
//             decimal_number += 9*pow(16, p);
//         }
//         else if(token[i] == 'A')
//         {
//             decimal_number += 10*pow(16, p);
//         }
//         else if(token[i] == 'B')
//         {
//             decimal_number += 11*pow(16, p);
//         }
//         else if(token[i] == 'C')
//         {
//             decimal_number += 12*pow(16, p);
//         }
//         else if(token[i] == 'D')
//         {
//             decimal_number += 13*pow(16, p);
//         }
//         else if(token[i] == 'E')
//         {
//             decimal_number += 14*pow(16, p);
//         }
//         else if(token[i] == 'F')
//         {
//             decimal_number += 15*pow(16, p);
//         }
//         p++;
//     }
//     p = -1;
//     i = 0;
//     for (i = 0; i <= U - 1; i++)
//     {
//         if (s[i] == '1')
//         {
//             after_decimal += pow(16, p);
//         }
//         else if(s[i] == '2')
//         {
//             after_decimal += 2*pow(16, p);
//         }
//         else if(s[i] == '3')
//         {
//             after_decimal += 3*pow(16, p);
//         }
//         else if(s[i] == '4')
//         {
//             after_decimal += 4*pow(16, p);
//         }
//         else if(s[i] == '5')
//         {
//             after_decimal += 5*pow(16, p);
//         }
//         else if(s[i] == '6')
//         {
//             after_decimal += 6*pow(16, p);
//         }
//         else if(s[i] == '7')
//         {
//             after_decimal += 7*pow(16, p);
//         }
//         else if(s[i] == '8')
//         {
//             after_decimal += 8*pow(16, p);
//         }
//         else if(s[i] == '9')
//         {
//             after_decimal += 9*pow(16, p);
//         }
//         else if(s[i] == 'A')
//         {
//             after_decimal += 10*pow(16, p);
//         }
//         else if(s[i] == 'B')
//         {
//             after_decimal += 11*pow(16, p);
//         }
//         else if(s[i] == 'C')
//         {
//             after_decimal += 12*pow(16, p);
//         }
//         else if(s[i] == 'D')
//         {
//             after_decimal += 13*pow(16, p);
//         }
//         else if(s[i] == 'E')
//         {
//             after_decimal += 14*pow(16, p);
//         }
//         else if(s[i] == 'F')
//         {
//             after_decimal += 15*pow(16, p);
//         }
//         p--;
//     }
//     int totaldec = (decimal_number + after_decimal);
//     return totaldec;
// }

// void tempDtoO(double t2)
// {
//     float a;
//     double c = t2;
//     int b, k, l = 0, m[20], n, i = 0, count = 0, p;
//     b = c;
//     a = c - b;
//     while (b != 0)
//     {
//         n = b % 8;
//         b /= 8;
//         m[i] = n;
//         count += 1;
//         i++;
//     }
//     for (k = count - 1; k >= 0; k--)
//     {
//         printf("%d", m[k]);
//     }

//     printf(".");
//     for (p = 1; p <= 4; p++)
//     {
//         a = a * 8;
//         l = a;
//         printf("%d", l);
//         if (l >= 1)
//             a = a - l;
//     }
//     printf("\n");
// }
// temp logics over
void DECtoBIN_fp();
void DECtoOCT_fp();
void DECtoHEX_fp();
void BINtoDEC_fp();
string BINtoOCT_fp(string);
string BINtoHEX_fp(string);
void OCTtoDEC_fp();
void OCTtoBIN_fp();
void OCTtoHEX_fp();
void HEXtoDEC_fp();
void HEXtoBIN_fp();
void HEXtoOCT_fp();

int main()
{
    int choice;
    // cout<<"Enter the choice from which you want to convert in which : "<<endl;
    cout << "1. Decimal to binary" << endl;
    cout << "2. Decimal to octal" << endl;
    cout << "3. Decimal to hexa" << endl;
    cout << "4. Binary to Decimal" << endl;
    cout << "5. Binary to Octal" << endl;
    cout << "6. Binary to Hexa" << endl;
    cout << "7. Octal to Decimal" << endl;
    cout << "8. Octal to Binary" << endl;
    cout << "9. Octal to Hexa" << endl;
    cout << "10. Hexa to Binary" << endl;
    cout << "11. Hexa to Decimal" << endl;
    cout << "12. Hexa to Octal" << endl<< endl;
    cout << "Enter the choice from which you want to convert in which : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "* Decimal to binary *" << endl;
        DECtoBIN_fp();
        break;
    }
    case 2:
    {
        cout << "* Decimal to octal *" << endl;
        DECtoOCT_fp();
        break;
    }
    case 3:
    {
        cout << "* Decimal to hexa *" << endl;
        DECtoHEX_fp();
        break;
    }
    case 4:
    {
        cout << "* Binary to Decimal *"<<endl;
        BINtoDEC_fp();
        break;
    }
    case 5:
    {
        cout << "* Binary to Octal *"<<endl;
        cout << "Enter any Binary Number : ";
        string n;
        cin >> n;
        cout << "Your Octal number is : " << BINtoOCT_fp(n);
        break;
    }
    case 6:
    {
        cout << "* Binary to Hexa *"<<endl;
        cout << "Enter any Binary Number: ";
        string n;
        cin >> n;
        cout << "Your Hexadecimal number is : " << BINtoHEX_fp(n);
        break;
    }
    case 7:
    {
        cout << "* Octal to Decimal *"<<endl;
        OCTtoDEC_fp();
        break;
    }
    case 8:
    {
        cout << "* Octal to Binary *"<<endl;
        OCTtoBIN_fp();
        break;
    }
    case 9:
    {
        cout << "* Octal to Hexa *"<<endl;
        OCTtoHEX_fp();
        break;
    }
    case 10:
    {
        cout << "* Hexa to Binary *"<<endl;
        HEXtoBIN_fp();
        break;
    }
    case 11:
    {
        cout << "* Hexa to Decimal *"<<endl;
        HEXtoDEC_fp();
        break;
    }
    case 12:
    {
        cout << "* Hexa to Octal *"<<endl;
        HEXtoOCT_fp();
        break;
    }
    }
    return 0;
}

void DECtoBIN_fp()
{
    float a;
    double c;
    int b, k, l = 0, m[20], n, i = 0, count = 0, p;
    printf("Enter any decimal number:");
    scanf("%lf", &c);
    b = c;
    a = c - b;
    while (b != 0)
    {
        n = b % 2;
        b /= 2;
        m[i] = n;
        count += 1;
        i++;
    }
    cout << "your binary number is : ";
    for (k = count - 1; k >= 0; k--)
    {
        printf("%d", m[k]);
    }

    printf(".");
    for (p = 1; p <= 4; p++)
    {
        a = a * 2;
        l = a;
        printf("%d", l);
        if (l >= 1)
            a = a - l;
    }
    printf("\n");
}

void DECtoOCT_fp()
{
    float a;
    double c;
    int b, k, l = 0, m[20], n, i = 0, count = 0, p;
    printf("Enter any decimal number:");
    scanf("%lf", &c);
    b = c;
    a = c - b;
    while (b != 0)
    {
        n = b % 8;
        b /= 8;
        m[i] = n;
        count += 1;
        i++;
    }
    cout << "your octal number is : ";
    for (k = count - 1; k >= 0; k--)
    {
        printf("%d", m[k]);
    }

    printf(".");
    for (p = 1; p <= 4; p++)
    {
        a = a * 8;
        l = a;
        printf("%d", l);
        if (l >= 1)
            a = a - l;
    }
    printf("\n");
}

void DECtoHEX_fp()
{
    float a;
    double c;
    int b, k, l = 0, m[20], n, i = 0, count = 0, p;
    printf("Enter any decimal number:");
    scanf("%lf", &c);
    b = c;
    a = c - b;
    while (b != 0)
    {
        n = b % 16;
        b /= 16;
        m[i] = n;
        count += 1;
        i++;
    }
    cout << "your hexadecimal number is : ";
    for (k = count - 1; k >= 0; k--)
    {
        if (m[k] >= 10)
        {
            if (m[k] == 10)
                printf("A");
            if (m[k] == 11)
                printf("B");
            if (m[k] == 12)
                printf("C");
            if (m[k] == 13)
                printf("D");
            if (m[k] == 14)
                printf("E");
            if (m[k] == 15)
                printf("F");
        }
        else
        {
            printf("%d", m[k]);
        }
    }

    printf(".");
    for (p = 1; p <= 4; p++)
    {
        a = a * 16;
        l = a;
        if (l >= 10)
        {
            if (l == 10)
                printf("A");
            if (l == 11)
                printf("B");
            if (l == 12)
                printf("C");
            if (l == 13)
                printf("D");
            if (l == 14)
                printf("E");
            if (l == 15)
                printf("F");
        }
        else
        {
            printf("%d", l);
        }
        if (l >= 1)
            a = a - l;
    }
    printf("\n");
}

void BINtoDEC_fp()
{
    string s;
    cout<<"Enter any binary number : ";
    cin >> s;
    string delimiter = ".";
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != std::string::npos)
    {
        token = s.substr(0, pos);
        s.erase(0, pos + delimiter.length());
    }
    int i, N, decimal_number = 0, p = 0;
    float after_decimal = 0, U;
    U = s.size();
    N = token.size();
    for (i = N - 1; i >= 0; i--)
    {
        if (token[i] == '1')
        {
            decimal_number += pow(2, p);
        }
        p++;
    }
    p = -1;
    i = 0;
    for (i = 0; i <= U - 1; i++)
    {
        if (s[i] == '1')
        {
            after_decimal += pow(2, p);
        }
        p--;
    }
    cout << "your decimal number is " << (decimal_number + after_decimal) << endl;
}

string BINtoOCT_fp(string bin)
{
    int left = bin.size();
	int right = bin.find_first_of('.'); 
	int len_left = right != -1 ? right : left;

	for (int i = 1; i <= (3 - len_left % 3) % 3; i++)
		bin = '0' + bin;

	if (right != -1)
	{
		int len_right = left - len_left - 1;
		for (int i = 1; i <= (3 - len_right % 3) % 3; i++)
			bin = bin + '0';
	}

	unordered_map<string, char> bin_oct_map;
	mapping_oct(&bin_oct_map);

	int i = 0;
	string ans = "";

	while (true)
	{
		ans += bin_oct_map[bin.substr(i, 3)];
		i += 3;
		if (i == bin.size())
			break;
		if (bin.at(i) == '.')
		{
			ans += '.';
			i++;
		}
	}
	return ans;
}

string BINtoHEX_fp(string bin)
{
    int left = bin.size();
	int right = bin.find_first_of('.'); 
	int len_left = right != -1 ? right : left;

	for (int i = 1; i <= (4 - len_left % 4) % 4; i++)
		bin = '0' + bin;

	if (right != -1)
	{
		int len_right = left - len_left - 1;
		for (int i = 1; i <= (4 - len_right % 4) % 4; i++)
			bin = bin + '0';
	}

	unordered_map<string, char> bin_hex_map;
	mapping_hex(&bin_hex_map);

	int i = 0;
	string ans = "";

	while (true)
	{
		ans += bin_hex_map[bin.substr(i, 4)];
		i += 4;
		if (i == bin.size())
			break;
		if (bin.at(i) == '.')
		{
			ans += '.';
			i++;
		}
	}
	return ans;
}
void OCTtoDEC_fp()
{
    string s;
    cout<<"Enter any Octal number : ";
    cin >> s;
    string delimiter = ".";
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != std::string::npos)
    {
        token = s.substr(0, pos);
        s.erase(0, pos + delimiter.length());
    }
    int i, N, decimal_number = 0, p = 0;
    float after_decimal = 0, U;
    U = s.size();
    N = token.size();
    for (i = N - 1; i >= 0; i--)
    {
        if (token[i] == '1')
        {
            decimal_number += pow(8, p);
        }
        else if(token[i] == '2')
        {
            decimal_number += 2*pow(8, p);
        }
        else if(token[i] == '3')
        {
            decimal_number += 3*pow(8, p);
        }
        else if(token[i] == '4')
        {
            decimal_number += 4*pow(8, p);
        }
        else if(token[i] == '5')
        {
            decimal_number += 5*pow(8, p);
        }
        else if(token[i] == '6')
        {
            decimal_number += 6*pow(8, p);
        }
        else if(token[i] == '7')
        {
            decimal_number += 7*pow(8, p);
        }
        p++;
    }
    p = -1;
    i = 0;
    for (i = 0; i <= U - 1; i++)
    {
        if (s[i] == '1')
        {
            after_decimal += pow(8, p);
        }
        else if(s[i] == '2')
        {
            after_decimal += 2*pow(8, p);
        }
        else if(s[i] == '3')
        {
            after_decimal += 3*pow(8, p);
        }
        else if(s[i] == '4')
        {
            after_decimal += 4*pow(8, p);
        }
        else if(s[i] == '5')
        {
            after_decimal += 5*pow(8, p);
        }
        else if(s[i] == '6')
        {
            after_decimal += 6*pow(8, p);
        }
        else if(s[i] == '7')
        {
            after_decimal += 7*pow(8, p);
        }
        p--;
    }
    cout << "Your decimal number is " << (decimal_number + after_decimal) << endl;
}

void OCTtoBIN_fp()
{
    string s;
    cout<<"Enter any Octal number : ";
    cin >> s;
    string delimiter = ".";
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != std::string::npos)
    {
        token = s.substr(0, pos);
        s.erase(0, pos + delimiter.length());
    }
    int i, N, decimal_number = 0, p = 0;
    float after_decimal = 0, U;
    U = s.size();
    N = token.size();
    cout<<"Your binary number is : ";
    for (i = 0; i<= N; i++)
    {
        if(token[i] == '0')
        {
            cout<<"000";
        }
        else if (token[i] == '1')
        {
            cout<<"001";
        }
        else if(token[i] == '2')
        {
            cout<<"010";
        }
        else if(token[i] == '3')
        {
            cout<<"011";
        }
        else if(token[i] == '4')
        {
            cout<<"100";
        }
        else if(token[i] == '5')
        {
            cout<<"101";
        }
        else if(token[i] == '6')
        {
            cout<<"110";
        }
        else if(token[i] == '7')
        {
            cout<<"111";
        }
        p++;
    }
    p = -1;
    i = 0;
    printf(".");
    for (i = 0; i <= U - 1; i++)
    {
        if(s[i] == '0')
        {
            cout<<"000";
        }
        else if (s[i] == '1')
        {
            cout<<"001";
        }
        else if(s[i] == '2')
        {
            cout<<"010";
        }
        else if(s[i] == '3')
        {
            cout<<"011";
        }
        else if(s[i] == '4')
        {
            cout<<"100";
        }
        else if(s[i] == '5')
        {
            cout<<"101";
        }
        else if(s[i] == '6')
        {
            cout<<"110";
        }
        else if(s[i] == '7')
        {
            cout<<"111";
        }
        p--;
    }      
}

void OCTtoHEX_fp()
{
    string oct;
    cout<<"Enter any Octal number : ";
    cin>>oct;
    int t1 = tempOtoD(oct);
    cout<<"Your hexadecimal number is : ";
    tempDtoH(t1);

}

void HEXtoBIN_fp()
{
    string s;
    cout<<"Enter any hexadecimal number : ";
    cin >> s;
    string delimiter = ".";
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != std::string::npos)
    {
        token = s.substr(0, pos);
        s.erase(0, pos + delimiter.length());
    }
    int i, N, decimal_number = 0, p = 0;
    float after_decimal = 0, U;
    U = s.size();
    N = token.size();
    cout<<"Your binary number is : ";
    for (i = 0; i<= N; i++)
    {
        if(token[i] == '0')
        {
            cout<<"0000";
        }
        else if (token[i] == '1')
        {
            cout<<"0001";
        }
        else if(token[i] == '2')
        {
            cout<<"0010";
        }
        else if(token[i] == '3')
        {
            cout<<"0011";
        }
        else if(token[i] == '4')
        {
            cout<<"0100";
        }
        else if(token[i] == '5')
        {
            cout<<"0101";
        }
        else if(token[i] == '6')
        {
            cout<<"0110";
        }
        else if(token[i] == '7')
        {
            cout<<"0111";
        }
        else if(token[i] == '8')
        {
            cout<<"1000";
        }
        else if(token[i] == '9')
        {
            cout<<"1001";
        }
        else if(token[i] == 'A')
        {
            cout<<"1010";
        }
        else if(token[i] == 'B')
        {
            cout<<"1011";
        }
        else if(token[i] == 'C')
        {
            cout<<"1100";
        }
        else if(token[i] == 'D')
        {
            cout<<"1101";
        }
        else if(token[i] == 'E')
        {
            cout<<"1110";
        }
        else if(token[i] == 'F')
        {
            cout<<"1111";
        }
        p++;
    }
    p = -1;
    i = 0;
    printf(".");
    for (i = 0; i <= U - 1; i++)
    {
        if(s[i] == '0')
        {
            cout<<"0000";
        }
        else if (s[i] == '1')
        {
            cout<<"0001";
        }
        else if(s[i] == '2')
        {
            cout<<"0010";
        }
        else if(s[i] == '3')
        {
            cout<<"0011";
        }
        else if(s[i] == '4')
        {
            cout<<"0100";
        }
        else if(s[i] == '5')
        {
            cout<<"0101";
        }
        else if(s[i] == '6')
        {
            cout<<"0110";
        }
        else if(s[i] == '7')
        {
            cout<<"0111";
        }
        else if(s[i] == '8')
        {
            cout<<"1000";
        }
        else if(s[i] == '9')
        {
            cout<<"1001";
        }
        else if(s[i] == 'A')
        {
            cout<<"1010";
        }
        else if(s[i] == 'B')
        {
            cout<<"1011";
        }
        else if(s[i] == 'C')
        {
            cout<<"1100";
        }
        else if(s[i] == 'D')
        {
            cout<<"1101";
        }
        else if(s[i] == 'E')
        {
            cout<<"1110";
        }
        else if(s[i] == 'F')
        {
            cout<<"1111";
        }
        p--;
    }      
}

void HEXtoDEC_fp()
{
    string s;
    cout<<"Enter any hexadecimal number : ";
    cin >> s;
    string delimiter = ".";
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != std::string::npos)
    {
        token = s.substr(0, pos);
        s.erase(0, pos + delimiter.length());
    }
    int i, N, decimal_number = 0, p = 0;
    float after_decimal = 0, U;
    U = s.size();
    N = token.size();
    for (i = N - 1; i >= 0; i--)
    {
        if (token[i] == '1')
        {
            decimal_number += pow(16, p);
        }
        else if(token[i] == '2')
        {
            decimal_number += 2*pow(16, p);
        }
        else if(token[i] == '3')
        {
            decimal_number += 3*pow(16, p);
        }
        else if(token[i] == '4')
        {
            decimal_number += 4*pow(16, p);
        }
        else if(token[i] == '5')
        {
            decimal_number += 5*pow(16, p);
        }
        else if(token[i] == '6')
        {
            decimal_number += 6*pow(16, p);
        }
        else if(token[i] == '7')
        {
            decimal_number += 7*pow(16, p);
        }
        else if(token[i] == '8')
        {
            decimal_number += 8*pow(16, p);
        }
        else if(token[i] == '9')
        {
            decimal_number += 9*pow(16, p);
        }
        else if(token[i] == 'A')
        {
            decimal_number += 10*pow(16, p);
        }
        else if(token[i] == 'B')
        {
            decimal_number += 11*pow(16, p);
        }
        else if(token[i] == 'C')
        {
            decimal_number += 12*pow(16, p);
        }
        else if(token[i] == 'D')
        {
            decimal_number += 13*pow(16, p);
        }
        else if(token[i] == 'E')
        {
            decimal_number += 14*pow(16, p);
        }
        else if(token[i] == 'F')
        {
            decimal_number += 15*pow(16, p);
        }
        p++;
    }
    p = -1;
    i = 0;
    for (i = 0; i <= U - 1; i++)
    {
        if (s[i] == '1')
        {
            after_decimal += pow(16, p);
        }
        else if(s[i] == '2')
        {
            after_decimal += 2*pow(16, p);
        }
        else if(s[i] == '3')
        {
            after_decimal += 3*pow(16, p);
        }
        else if(s[i] == '4')
        {
            after_decimal += 4*pow(16, p);
        }
        else if(s[i] == '5')
        {
            after_decimal += 5*pow(16, p);
        }
        else if(s[i] == '6')
        {
            after_decimal += 6*pow(16, p);
        }
        else if(s[i] == '7')
        {
            after_decimal += 7*pow(16, p);
        }
        else if(s[i] == '8')
        {
            after_decimal += 8*pow(16, p);
        }
        else if(s[i] == '9')
        {
            after_decimal += 9*pow(16, p);
        }
        else if(s[i] == 'A')
        {
            after_decimal += 10*pow(16, p);
        }
        else if(s[i] == 'B')
        {
            after_decimal += 11*pow(16, p);
        }
        else if(s[i] == 'C')
        {
            after_decimal += 12*pow(16, p);
        }
        else if(s[i] == 'D')
        {
            after_decimal += 13*pow(16, p);
        }
        else if(s[i] == 'E')
        {
            after_decimal += 14*pow(16, p);
        }
        else if(s[i] == 'F')
        {
            after_decimal += 15*pow(16, p);
        }
        p--;
    }
    cout << "Your decimal number is " << (decimal_number + after_decimal) << endl;
}


void HEXtoOCT_fp()
{
    string hex;
    cout<<"Enter the Hexadecimal number : ";
    cin>>hex;
    int t2 = tempHtoD(hex);
    tempDtoO(t2);
}