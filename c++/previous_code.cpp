// C++ Programming Tutorial
// Code written by Benjamin McGregor (benjamin.mcgregor2002@gmail.com)
// Tutorial followed in preparation for 'Advanced C++ Programming' Module at the University of Leicester

// This module is a collection of methods written per each episode of Caleb Curry's C++ Tutorial Series (https://www.youtube.com/playlist?list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG)
// All of the methods, when no longer needed in the main 'youtube.cpp' file, are placed in here for reference.

#include <iostream>
#include <climits>
#include <float.h>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>
#include <fstream>

using std::cout;
using std::cin;
using std::string;

#define X 10 // C method of creating constants (Macros)

double power(double base, int exponent)
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    return result;
}

void print_pow(double base, int exponent)
{
    double result = power(base, exponent);

    cout << base << " raised to the " << exponent << " power is " << result << "." << std::endl;
}

void integral_data_types()
{
   short a;
   int b; // Minimum 16 bits, usually 32
   long c; // Minimum 32 bits
   long long d;
   unsigned short aa;
   unsigned int bb;
   unsigned long cc;
   unsigned long long dd;

    cout  << "short -> " << "Max: " << SHRT_MAX  << " Min: " << SHRT_MIN << std::endl;
    cout  << "int -> " << "Max: " << INT32_MAX << " Min: " << INT16_MIN << std::endl;
    cout  << "long -> " << "Max: " << LONG_MAX  << " Min: " << LONG_MIN << std::endl;
    cout  << "long long -> " << "Max: " << LLONG_MAX  << " Min: " << LLONG_MIN << std::endl;

    cout  << "unsigned short -> " << "Max: " << USHRT_MAX  << std::endl;
    cout  << "unsigned int -> " << "Max: " << UINT32_MAX << std::endl;
    cout  << "unsigned long -> " << "Max: " << ULONG_MAX << std::endl;
    cout  << "unsigned long long -> " << "Max: " << ULLONG_MAX  <<  std::endl;

}

void chars() 
{
    unsigned char x = 128;
   char y = 128;

    cout << x << std::endl;

    cout << (int) x << std::endl;
    cout << (int) y << std::endl;
}

void escape_sequences()
{
    char single_quote = '\'';

    cout <<"New Line\nExample";
    cout <<"Backspace\bExample";
    cout << "Tab\tExample";
    cout << "Vertical Tab\vExample";
    cout << "Alert Noise\aExample";
    cout << "\0"; // End of C-Style string
    cout << "\"Quote\" in string";
    cout << "\\";
}

void boolean_data_type()
{
    bool good = 1;
    bool bad = 0;
    bool ugly = -1;
    cout << good <<  std::endl << bad << std::endl << ugly << std::endl;

    bool found = true;

    cout << std::boolalpha << found << std::endl;
    if(found) cout << "This is true" << std::endl;   
}

void floating_point_numbers()
{
    
    int pence = 100;
    float a = 10.0 / 3; // Least number of significant digits, not entirely trustworthy
    a = a * 10000000000000000;
    double b = 7.7E4; // 77000 (7.7x10^4)
    long double c;

    cout << a << std::endl;
    cout << std::fixed << a << std::endl;
    cout << b << std::endl;

    // Number of digits data types can be trusted to
    cout << "Float: " << FLT_DIG << std::endl; // 6
    cout << "Double: " << DBL_DIG << std::endl; // 15
    cout << "Long Double: " << LDBL_DIG << std::endl; // 18
}

void constants()
{
    const int x = 3; // Variable cannot be changed (must be assigned when intialised)
    enum { y = 100 }; // Enum constant
}

void numeric_functions()
{
    cout << sqrt(25) << std::endl;

    cout << sqrt(-25) << std::endl; // nan
    cout << pow(9, 999) << std::endl; // inf
    cout << pow(-9, 999) << std::endl; // -inf

    cout << NAN << " " << INFINITY << " " << -INFINITY << std::endl;

    cout << 10 % 3 << std::endl;
    cout << remainder(10, 3.25) << std::endl;
    cout << fmod(10, 3.25) << std::endl;

    cout << fmax(1.5, 5) << std::endl; // Highest value
    cout << fmin(3, 2.5) << std::endl; // Lowest value

    cout << ceil(4.8) << std::endl; // Rounds up (ceiling)
    cout << floor(3.9) << std::endl; // Rounds down (floor)

    cout << trunc(-1.6) << std::endl; // Crops what comes after decimal point

    cout << round(-1.7) << std::endl; // Rounds to whichever is closest
}

void string_class_c_strings()
{
    string empty; // Empty string
    string text = "String";
    string complete_text = text + " Example"; // Concatenation

    cout << text[0] << std::endl;
    cout << empty << std::endl;

    cout << complete_text<< std::endl;
    cout << complete_text.length() << std::endl;

    char name[] = "Benjamin"; // C string, array of characters ("Benjamin\0", cannot be altered)

    complete_text = "String overwritten.";

    string greeting;
    cin >> greeting;
    cout << greeting <<std::endl;
}

void getline_for_strings()
{
    string greeting;
    getline(cin, greeting); // For strings
    cout << greeting << std::endl;
}

void string_modifier_methods()
{
    string greeting = "Hello";
    greeting += " there";
    greeting.append(" friend!!");
    greeting.insert(3, " ");
    greeting.erase(3, 1);
    greeting.erase(greeting.length()-1);
    greeting.pop_back();
    greeting.replace(0, 5, "Bonjour");
    cout << greeting << " (" << greeting.length() << " characters)" << std::endl;
}

void string_operation_methods()
{
    string to_censor = "What the hell?";
    to_censor.replace(to_censor.find("hell"), 4, "****");
    cout << to_censor << std::endl;

    string greeting = "Good morning.";
    cout << greeting.substr(5, 7) << std::endl;

    cout << greeting.find_first_of("o") << std::endl;
    cout << greeting.find_first_of("!") << std::endl; // Returns NPOS (Huge number which = -1)

    unsigned long long x = -1; // Equivalent to NPOS (-1 as unsigned long long)
    cout << x << std::endl;

    if(greeting.find_first_of("!") == -1) cout << "NOT FOUND" << std::endl; // Checks if "!" is in string


    // Two ways of comparing strings
    if(greeting == "Good morning.") cout << "EQUAL" << std::endl;
    if(greeting.compare("Good morning.") == 0) cout << "EQUAL" << std::endl;
}

void literals()
{
    auto x = 5.5L; // Determines data type based on literal value (add '-std=c++11' to compilation command)
}

void hex_and_octal()
{
    int number1 = 30; // 30 (Decimal)
    int number2 = 0x30; // 48 (Hexadecimal)
    int number3 = 030; // 24 (Octal)

    cout << number1 << ", " << number2 << ", " << number3 << std::endl; 
    cout << std::hex << number1 << ", " << std::oct << number1 << std::endl; 
}

void operator_precedence_and_associativity()
{
    int x = 5 + 5; // Expression - use operators to evaluate to a single value
    int y = 5 / 2; // Uses integer division
    double z = 5. / 2; // Correct result

    double a = 10 % 4; // Modulus operator

    double b = 10 / 4 * 6 + 1; // Example of operator precedence (BIDMAS)
    double c = 10 / 4 * (6 + 1); // Because of precedence, b and c are different

    cout << y << std::endl;
    cout << z << std::endl;
    cout << a << std::endl;

    cout << b << std::endl << c << std::endl;

    double d;
    double e;

    d = 10;
    (e = d) = 100; //  e = d; e=100

    cout << "d: " << d << "\t" << "e: " << e << std::endl;
}

void if_statements()
{
    cout << "Grade: ";
    int grade;
    cin >> grade;

    if(grade< 40)
    {
        cout << "Fail";
    }
    else if(grade < 50)
    {
        cout << "Third";
    }
    else if(grade < 60)
    {
        cout << "Lower Second";
    }
    else if(grade < 70)
    {
        cout << "Upper Second";
    }
    else if(grade <= 100)
    {
        cout << "First";
    }
    else
    {
        cout << "Invalid grade";
    }
    cout << std::endl;
}

void logical_and_comparison_operators()
{
    string answer = "Benjamin";
    int age_answer = 20;
    
    string guess;
    cout << "Guess my name: ";
    cin >> guess;

    int age_guess;
    cout << "Guess my age: ";
    cin >> age_guess; 

    if(guess == answer && age_guess == age_answer)
    {
        cout << "Correct.\n";
    }
    else if(guess == answer || age_guess == age_answer)
    {
        cout << "Partially correct.\n";
    }
    else if(guess != answer && age_guess != age_answer)
    {
        cout << "Completely incorrect.\n";
    }
}

void switch_statement_and_enum()
{
    enum class Season{summer, spring, autumn, winter};
    Season now = Season::summer;

    switch(now)
    {   
        case Season::summer:
            cout << "It's warm outside.\n";
            break;
        case Season::spring:
            break;
        case Season::autumn:
            break;
        case Season::winter:
            cout << "It's cold outside.\n";
            break;
    }
}

void for_loops()
{
    for (int i = 1; i < 11; i++)
    {
        cout << i << std::endl;
    }

    for (int i = 10; i >0; i--)
    {
        cout << i << std::endl;
    }  

    int fact = 5;
    int factorial = fact;
    for (int i = factorial - 1; i > 1; i--)
    {
        factorial = factorial * i;
    }
    cout << "Factorial of " << fact << ": " << factorial << std::endl;
}

void while_loop_and_factorial_calculator()
{
    int i = 0;
    while(i<10)
    {
        cout << i << "\t";
        i++;
    }

    int j = 10;
    while(j >= 1)
    {
        cout << j << "\t";
        j--;
    }

    int factorial = 5;
    int k = factorial - 1;
    while(k > 1)
    {
        factorial *= k;
        k--;
    }
    cout << std::endl << factorial << std::endl;
}

void do_while_loop()
{
    string password = "password";
    string guess;
    do
    {
        cout << "Password: ";
        cin >> guess;
    } while(guess != password);
}

void break_continue()
{
    string sentence = "Hello. My name is Benjamin";
    for(int i=  0; i < sentence.size(); i++)
    {

        if(sentence[i] == 'a')
        {
            cout << "Found 'a'\n";
            continue;
        }
                cout << sentence[i] << std::endl;
    }
    cout << "Done\n";
}

void conditional_operator()
{
    int answer = 10;
    int guess;
    cin >> guess;
    guess == answer ? cout << "Correct\n" : cout << "Incorrect\n";
}


void print_array(std::array<int, 251> array, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    cout << std::endl;
}


int main()
{ 
    power(20, 2);
    print_pow(3, 2);
    integral_data_types();
    chars();
    escape_sequences();
    boolean_data_type();
    floating_point_numbers();
    constants();
    numeric_functions();
    string_class_c_strings();
    getline_for_strings();
    string_modifier_methods();
    string_operation_methods();
    literals();
    hex_and_octal();
    operator_precedence_and_associativity();
    if_statements();
    logical_and_comparison_operators();
    switch_statement_and_enum();
    for_loops();
    while_loop_and_factorial_calculator();
    do_while_loop();
    break_continue();
    conditional_operator();
    print_array({1, 2, 3}, 3);

    return 0;
}

