#include <iostream>

int main()
{
    int size = 0;
    std::cout << "Enter the size for the array: ";
    std::cin >> size;

    // TODO 1: Allocate an array of 'size' doubles on the heap.
    // Store the pointer in a variable named 'p_arr'.
    double *p_arr = new double[size];

    // TODO 2: Write a loop to fill the array with values.
    // For example, p_arr[i] = i * 1.5;
    for (int i = 0; i < size; i++)
    {
        p_arr[i] = i * 1.5;
    }

    // TODO 3: Write a loop to print all values in the array,
    // separated by a space.
    std::cout << "Array values: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << p_arr[i] << " ";
    }
    std::cout << std::endl;

    // TODO 4: Deallocate the array memory using the correct 'delete[]' operator.
    delete[] p_arr;

    // TODO 5: (Good Practice) Set the pointer to 'nullptr'.
    p_arr = nullptr;

    std::cout << "Exercise 2 complete." << std::endl;
    return 0;
}