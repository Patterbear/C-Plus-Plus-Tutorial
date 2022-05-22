#include <iostream>
#include <cmath>

using std::cout;
using std::cin;


int main()
{
    int base, exponent;

    cout << "Base: ";
    cin >> base;

    cout << "Exponent: ";
    cin >> exponent;

    double power = pow(base, exponent);

    cout << power << std::endl;
}

