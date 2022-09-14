#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{

    std::string filename;
    std::cin >> filename;

    std::ofstream file (filename + ".txt", std::ios::app); // ios::app sets it to 'append' so new names will be added, instead of replacing exisiting content

    if(file.is_open())
    {
        std::cout << "File open.";
    }

    std::vector<std::string> names;
    names.push_back("Benjamin");
    names.push_back("Luke");
    names.push_back("William");
    
    for(std::string name : names)
    {
        file << name << std::endl;
    }

    file.close();

    return 0;
}