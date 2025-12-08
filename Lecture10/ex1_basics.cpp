#include <iostream>
#include <string>

// TODO: Define the RPGCharacter class here
class RPGCharacter
{
private:
    // 1. Make member variables private (name, health)
    std::string m_name;
    int m_health;

public:
    // 2. Make constructor public
    RPGCharacter(std::string name, int health) : m_name(name), m_health(health) {}

    // 3. Add take_damage() and is_alive() methods
    void take_damage(int damage)
    {
        m_health -= damage;
        if (m_health < 0)
            m_health = 0;
    }

    bool is_alive() const
    {
        return m_health > 0;
    }
};

int main()
{
    // Test your class
    RPGCharacter hero("Aragorn", 100);

    std::cout << "Hero created. Is alive? " << hero.is_alive() << std::endl;

    hero.take_damage(120);
    std::cout << "Hero took damage. Is alive? " << hero.is_alive() << std::endl;

    return 0;
}