#include <iostream>

void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
}

int main()
{
    int guesses[] = {12, 43, 23, 43, 23};
    int size = sizeof(guesses) / sizeof(int);
    print_array(guesses, 5);

    /*
    int num = 3;
    int size = sizeof(guesses) / sizeof(guesses[0]); // Calculates size of array, can use 'sizeof(int)' instead of 'sizeof(guesses[0])'

    std::cout << size << std::endl;
    */

    return 0;
}