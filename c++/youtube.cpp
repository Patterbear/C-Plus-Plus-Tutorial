#include <iostream>
#include <cmath>

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

int main()
{
    double base;
    int exponent;

    cout << "Base: ";
    cin >> base;

    cout << "Exponent: ";
    cin >> exponent;

    print_pow(base, exponent);
    print_pow(100, 4);
    print_pow(2, 4);

}

