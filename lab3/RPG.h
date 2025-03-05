#ifndef RPG_H
#define RPG_H

#include <string> // Explicitly include for std::string

using namespace std;

const int SKILL_SIZE = 2;

class RPG {
public:
    // Constructors
    RPG();
    RPG(string name, int health, int strength, int defense, string type);

    // Methods
    void setSkills();
    void printAction(string action, RPG target);
    void updateHealth(int damage); // Updated parameter name to reflect UML (damage, not new_health)
    // void attack(RPG *target); // Commented out - not implemented
    // void useSkill(RPG *target); // Commented out - not implemented

    // Const getters
    bool isAlive() const;
    string getName() const;
    int getHealth() const;
    int getStrength() const;
    int getDefense() const;

private:
    string name;
    int health;
    int strength;
    int defense;
    string type; // warrior, mage, thief, archer
    string skills[SKILL_SIZE];
};

#endif