#include <iostream>
#include <vector>

int main()
{
    int grades_array[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    std::vector<std::vector<int>> grades =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    // Nested for loop to iterate through multidimensional vector
    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            std::cout << grades[r][c] << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}
