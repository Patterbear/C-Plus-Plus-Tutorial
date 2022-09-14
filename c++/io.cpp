#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <fstream>

void writing_to_files()
{

    std::string filename;
    std::cout << "File Name: ";
    std::cin >> filename;

    std::ofstream file (filename + ".txt", std::ios::app); // ios::app sets it to 'append' so new names will be added, instead of replacing exisiting content

    if(file.is_open())
    {
        std::cout << "File open." << std::endl;
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

}


// Gets the first character from file
char get_first_character()
{
    std::ifstream file("file.txt");
    char temp = file.get();

    return temp;
}


// Gets the first line from file
std::string get_first_line()
{
    std::ifstream file("file.txt");
    std::string line;
    getline(file, line);
   
   return line;
}

int main()
{
    writing_to_files();

    std::ifstream file("file.txt");

    std::vector<std::string> names;

    std::string input;
    while(file >> input)
    {
        names.push_back(input);
    }

    for(std::string name : names)
    {
        std::cout << name << std::endl;
    }

    file.close();

    std::cout << get_first_character() << "\t" << get_first_line();

    return 0;
}