#include <iostream>

using std::cout;
using std::cin;


int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int slices;
    cout << "How many slices of pizza would you like?: ";
    cin >> slices;
    cout << "You have " << slices << " slices of pizza." << std::endl;

    cout << "The number of your pizza slices has doubled, you now have " << multiply(slices, 2) << " pizza slices." << std::endl;

}

