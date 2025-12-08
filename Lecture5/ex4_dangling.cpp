#include <iostream>

int main()
{
    // 1. Allocate and use memory
    int *p = new int;
    *p = 7;

    std::cout << "[Line 8] Value is: " << *p << std::endl;

    // 2. Free the memory
    delete p;

    // TODO: Fix this.
    // Add one line of code immediately after 'delete p;'
    // that follows "good practice" and will prevent this

    std::cout << "[Line 18] Pointer is now safe (nullptr)." << std::endl;