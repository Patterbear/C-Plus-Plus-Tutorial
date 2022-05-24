#include <iostream>
#include <climits>
#include <float.h>

using std::cout;
using std::cin;

double power(double base, int exponent)
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    return result;
}

void print_pow(double base, int exponent)
{
    double result = power(base, exponent);

    cout << base << " raised to the " << exponent << " power is " << result << "." << std::endl;
}

void integral_data_types()
{
   short a;
   int b; // Minimum 16 bits, usually 32
   long c; // Minimum 32 bits
   long long d;
   unsigned short aa;
   unsigned int bb;
   unsigned long cc;
   unsigned long long dd;

    cout  << "short -> " << "Max: " << SHRT_MAX  << " Min: " << SHRT_MIN << std::endl;
    cout  << "int -> " << "Max: " << INT32_MAX << " Min: " << INT16_MIN << std::endl;
    cout  << "long -> " << "Max: " << LONG_MAX  << " Min: " << LONG_MIN << std::endl;
    cout  << "long long -> " << "Max: " << LLONG_MAX  << " Min: " << LLONG_MIN << std::endl;

    cout  << "unsigned short -> " << "Max: " << USHRT_MAX  << std::endl;
    cout  << "unsigned int -> " << "Max: " << UINT32_MAX << std::endl;
    cout  << "unsigned long -> " << "Max: " << ULONG_MAX << std::endl;
    cout  << "unsigned long long -> " << "Max: " << ULLONG_MAX  <<  std::endl;

}

void chars() 
{
    unsigned char x = 128;
   char y = 128;

    cout << x << std::endl;

    cout << (int) x << std::endl;
    cout << (int) y << std::endl;
}

void escape_sequences()
{
    char single_quote = '\'';

    cout <<"New Line\nExample";
    cout <<"Backspace\bExample";
    cout << "Tab\tExample";
    cout << "Vertical Tab\vExample";
    cout << "Alert Noise\aExample";
    cout << "\0"; // End of C-Style string
    cout << "\"Quote\" in string";
    cout << "\\";
}

void boolean_data_type()
{
    bool good = 1;
    bool bad = 0;
    bool ugly = -1;
    cout << good <<  std::endl << bad << std::endl << ugly << std::endl;

    bool found = true;

    cout << std::boolalpha << found << std::endl;
    if(found) cout << "This is true";   
}

int main()
{ 

    int pence = 100;
    float a = 10.0 / 3; // Least number of significant digits, not entirely trustworthy
    a = a * 10000000000000000;
    double b = 7.7E4; // 77000 (7.7x10^4)
    long double c;

    cout << a << std::endl;
    cout << std::fixed << a << std::endl;
    cout << b << std::endl;

    // Number of digits data types can be trusted to
    cout << "Float: " << FLT_DIG << std::endl; // 6
    cout << "Double: " << DBL_DIG << std::endl; // 15
    cout << "Long Double: " << LDBL_DIG << std::endl; // 18


}

