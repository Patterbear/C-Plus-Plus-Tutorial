#include <iostream>

void swap(int &a, int &b) // '&' ensures variable is passed by reference
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb: " << b << "\n";
}

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);

    std::cout << "a: " << a << "\tb: " << b << "\n";
    return 0;
}