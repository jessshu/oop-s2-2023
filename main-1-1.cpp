#include "player.h"
#include "warrior.h"
#include "wizard.h"
#include <iostream>

int main() {
    // initialise 
    Warrior p1("Warrior", 100, 10, "Sword");
    Wizard p2("Wizard", 100, 10, 10);

    p2.getHealth();



    return 0; 
}
