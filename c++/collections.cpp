#include <iostream>
#include <limits>
#include <vector>
#include <string>

void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
}

void fill_array_from_input()
{
    const int SIZE = 10;
    int guesses[SIZE];

    int count = 0;
    
    for(int i = 0; i < SIZE; i++)
    {
        if(std::cin >> guesses[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    
    print_array(guesses, count);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string test;
    std::cin >> test;
    std::cout << test << std::endl;
}

int main()
{
   std::vector<int> data = {1, 2, 3};
   data.push_back(4);
   std::cout << data[data.size() - 1] << std::endl;
   data.pop_back();
   std::cout << data.size() << std::endl;
}