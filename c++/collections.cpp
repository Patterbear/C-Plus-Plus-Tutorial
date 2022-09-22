#include <iostream>
#include <vector>

void do_something(const int array[])
{
    // MUST NOT alter array as it has been labelled 'const'
}

void print_array(const int data[], int size) // 'const' ensures the actual array isn't altered (A 'promise' not to change the data)
{
    for(int i = 0; i < size; i++)
    {
        // data[i]++; // Won't work because we've labelled data 'const'
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
    do_something(data);
}

int main()
{
    int data[] = {1, 2, 3};
    print_array(data, 3);

    return 0;
}
