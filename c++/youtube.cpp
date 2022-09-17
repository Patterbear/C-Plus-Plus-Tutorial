// C++ Programming Tutorial
// Code written by Benjamin McGregor (benjamin.mcgregor2002@gmail.com)
// Tutorial followed in preparation for 'Advanced C++ Programming' Module at the University of Leicester

// This is the main file of the project and currently contains a guessing game command line application.
// Functions written previously whilst following the series, that are no longer needed, have been put into the 'previous_code.cpp' file.


#include <iostream>
#include <vector>
#include <fstream>

using std::cout;
using std::cin;
using std::string;

void save_score(int count)
{
    std::ifstream input ("best_score.txt");
    if(!input.is_open())
    {
        cout << "Unable to read file\n";
        return;
    }

    int best_score;
    input >> best_score;

    std::ofstream output("best_score.txt");
        if(!output.is_open())
    {
        cout << "Unable to read file\n";
        return;
    }

    if(count < best_score)
    {
        output << count;
    } else
    {
        output << best_score;
    }
}

void print_vector(std::vector<int> vector)
{
    for(int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << "\t";
    }
    cout << std::endl;
}


void play_game()
{
    std::vector <int> guesses;
    int count = 0;

    int random = rand() % 251;
    cout << random << std::endl;
    cout << "Guess a number: ";

    while(true)
    {
        int guess;
        cin >> guess;
        count++;

        guesses.push_back(guess);

        if(guess == random)
        {
            cout << "You win.\n";
            break;
        } else if(guess < random)
        {
            cout << "Too low.\n";
        } else
        {
            cout << "Too high.\n";
        }
    }

    save_score(count);

    print_vector(guesses);
}

int main()
{ 
    srand(time(NULL));
    int choice;

    do
    {
        cout << "0. Quit" << std::endl << "1. Play Game\n";

        cin >> choice;

        switch(choice)
        {
            case 0:
                cout << "Exiting...";
                return 0;
            case 1:
                play_game();
                break;
        }

    }
    while(choice != 0);

}

