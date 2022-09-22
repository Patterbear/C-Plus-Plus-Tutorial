#include <iostream>


void swap(int &a, int &b) // '&' ensures variable is passed by reference
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb: " << b << "\n";
}


void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a = 10;
    int b = 20;

    std::cout << "a: " << a << "\tb: " << b << "\n";

    swap(a, b);


    std::string forename = "Benjamin";
    std::string surname = "McGregor";

    std::cout << forename << " " << surname << std::endl;

    swap(forename, surname);

    std::cout << forename << " " << surname << std::endl;

    
    return 0;
}