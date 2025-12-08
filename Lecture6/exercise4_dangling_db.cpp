#include <iostream>
#include <string>
#include <vector>

struct Student
{
    int id;
    std::string name;
};

/**
 * @brief Sets up the student database.
 * Returns a vector by value to avoid dangling pointers.
 */
std::vector<Student> setup_database()
{
    // 'student_db' is now a LOCAL VECTOR.
    std::vector<Student> student_db = {
        {201, "David"},
        {202, "Eve"}};
    std::cout << "Inside setup_database(): Creating vector." << std::endl;

    // We return the vector by value (copy)
    return student_db;
}

int main()
{
    std::cout << "Calling setup_database()..." << std::endl;
    std::vector<Student> db = setup_database();

    std::cout << "\nIn main():" << std::endl;
    std::cout << "  Database has " << db.size() << " students." << std::endl;

    // Now this is safe - we're using the actual vector
    std::cout << "  First student: " << db[0].name << std::endl;

    // TASK:
    // 1. We fixed it by returning vector by value.
    // 2. The previous version crashed because it returned a pointer
    //    to stack memory that was destroyed when the function returned.

    return 0;
}