#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int slices;

    cout << "How many slices of pizza would you like?: ";

    cin >> slices;
    
    cout << "You have " << slices << " slices of pizza." << std::endl; // C++ string concatenation
}
