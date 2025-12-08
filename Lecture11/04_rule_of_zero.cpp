#include <iostream>
#include <memory> // Required for std::unique_ptr

// ---------------------------------------------------------
// EXERCISE 4: The Rule of Zero
//
// GOAL: Refactor this class to use std::unique_ptr.
//       Remove the Destructor, Copy Ctor, and Assignment Op.
//       Observe how the compiler prevents unsafe copying.
// ---------------------------------------------------------

// TODO: Refactor this class
class Logger
{
private:
    std::unique_ptr<int> logID; // Change this to std::unique_ptr<int>

public:
    Logger(int id) : logID(std::make_unique<int>(id)) {}

    // --- DELETE EVERYTHING BELOW THIS LINE AFTER REFACTORING ---
    // With unique_ptr, you don't need ANY of these!

    // ~Logger() { } - NOT NEEDED
    // Logger(const Logger& other) { } - NOT NEEDED
    // Logger& operator=(const Logger& other) { } - NOT NEEDED
    // -----------------------------------------------------------

    void log(std::string msg)
    {
        std::cout << "[ID " << *logID << "]: " << msg << "\n";
    }
};

int main()
{
    Logger log1(101);
    log1.log("System started");

    // AFTER REFACTORING:
    // The line below should cause a COMPILER ERROR.
    // std::unique_ptr cannot be copied, only moved.

    // Logger log2 = log1;  // INTENTIONALLY COMMENTED - WOULD NOT COMPILE

    return 0;