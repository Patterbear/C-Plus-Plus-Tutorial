#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <array>

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

void creating_a_vector()
{
   std::vector<int> data = {1, 2, 3};
   data.push_back(4);
   std::cout << data[data.size() - 1] << std::endl;
   data.pop_back();
   std::cout << data.size() << std::endl;
}

void print_vector(std::vector<int> &data)  // '&' shares memory with original variable (pass by reference, same memory location)
{
    data.push_back(12);
    for(int i = 0;i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
}

void passing_vectors_to_functions()
{
    std::vector<int> data = {1, 2, 3};
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
}

void print_array(std::array<int, 20> &data, int size)
{
    for(int i = 0;i < size; i++)
    {
        std::cout << data[i] << "\t";
    }
}

int main()
{
    std::array<int, 20> data = {1, 2, 3};
    print_array(data, 3);
}
