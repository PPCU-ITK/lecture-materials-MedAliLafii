#include <iostream>
#include <vector>
#include <string>
#include <map>

int main()
{
    std::vector<std::string> words = {
        "apple", "banana", "apple", "cherry", "date",
        "banana", "apple", "fig", "cherry"};

    // TODO: 1. Declare a std::map<std::string, int> named 'counts'
    std::map<std::string, int> counts;

    // TODO: 2. Iterate through the 'words' vector.
    //          For each word, increment its count in the map.
    //          Hint: counts[word]++ works even if the key doesn't exist yet!
    for (const auto &word : words)
    {
        counts[word]++;
    }

    std::cout << "Word Frequencies (Sorted automatically by Map):" << std::endl;

    // TODO: 3. Iterate through the map and print "Word: Count"
    //          Hint: use 'for (auto const& [word, count] : counts)'
    //          OR 'for (auto it = counts.begin(); it != counts.end(); ++it)'
    for (auto const &[word, count] : counts)
    {
        std::cout << word << ": " << count << std::endl;
    }

    return 0;
}