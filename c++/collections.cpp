#include <iostream>

int main()
{
    int guesses[] = {12, 43, 23, 43, 23};

    int num = 3;
    int size = sizeof(guesses) / sizeof(guesses[0]); // Calculates size of array, can use 'sizeof(int)' instead of 'sizeof(guesses[0])'

    std::cout << size << std::endl;

    for(int i = 0; i < size; i++)
    {
        std::cout << guesses[i] << std::endl;
    }

        for(int i = 0; i < num; i++)
    {
        std::cout << guesses[i] << std::endl;
    }

    return 0;
}