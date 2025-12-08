#include <iostream>
#include <string>

// EXERCISE 1: Function Overloading

// 1. Existing function for integers
void print_data(int i)
{
    std::cout << "[Integer]: " << i << "\n";
}

// TODO: Add an overload for std::string
// Hint: Use const std::string& for efficiency
void print_data(const std::string &s)
{
    std::cout << "[String]: " << s << "\n";
}

// TODO: Add an overload for double
void print_data(double d)
{
    std::cout << "[Double]: " << d << "\n";
}

int main()
{
    int my_int = 42;
    std::string my_string = "Hello C++";
    double my_double = 3.14159;

    print_data(my_int); // Calls int version

    // UNCOMMENT these lines after implementing the overloads
    print_data(my_string); // Should call string version
    print_data(my_double); // Should call double version

    return 0;
}