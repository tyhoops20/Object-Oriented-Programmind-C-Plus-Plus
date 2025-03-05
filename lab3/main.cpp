#include <iostream>
#include "RPG.h"

using namespace std;

int main() {
    // Create an RPG object using the default constructor
    RPG defaultRPG;
    
    // Create an RPG object using the overloaded constructor
    RPG customRPG("Hero", 150, 15, 12, "mage");

    // Test accessor functions and isAlive() for defaultRPG
    cout << "Default RPG (NPC) Stats:" << endl;
    cout << "Name: " << defaultRPG.getName() << endl;
    cout << "Health: " << defaultRPG.getHealth() << endl;
    cout << "Strength: " << defaultRPG.getStrength() << endl;
    cout << "Defense: " << defaultRPG.getDefense() << endl;
    cout << "Is Alive? " << (defaultRPG.isAlive() ? "Yes" : "No") << endl;

    // Test updateHealth() (apply 100 damage to reduce health to 0) for defaultRPG
    cout << "\nApplying 100 damage to defaultRPG..." << endl;
    defaultRPG.updateHealth(100); // Subtract 100 from health (100 - 100 = 0)
    cout << "New Health: " << defaultRPG.getHealth() << endl;
    cout << "Is Alive? " << (defaultRPG.isAlive() ? "Yes" : "No") << endl;

    // Test accessor functions and isAlive() for customRPG
    cout << "\nCustom RPG (Hero) Stats:" << endl;
    cout << "Name: " << customRPG.getName() << endl;
    cout << "Health: " << customRPG.getHealth() << endl;
    cout << "Strength: " << customRPG.getStrength() << endl;
    cout << "Defense: " << customRPG.getDefense() << endl;
    cout << "Is Alive? " << (customRPG.isAlive() ? "Yes" : "No") << endl;

    // Test updateHealth() (apply 160 damage to reduce health to -10) for customRPG
    cout << "\nApplying 160 damage to customRPG..." << endl;
    customRPG.updateHealth(160); // Subtract 160 from health (150 - 160 = -10)
    cout << "New Health: " << customRPG.getHealth() << endl;
    cout << "Is Alive? " << (customRPG.isAlive() ? "Yes" : "No") << endl;

    return 0;
}