#include <iostream>
#include <climits>

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

int main()
{ 
   unsigned char x = 128;
   char y = 128;

    cout << x << std::endl;

    cout << (int) x << std::endl;
    cout << (int) y << std::endl;
}

