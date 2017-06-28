#include <iostream>
#include <iomanip>
#include <string>

// This will be the main menu and also the menu shown upon a reset
void mainMenu() {
    std::cout << "Welcome to Bob's used car lot and chop shop!\n" << "As you "
            "can see we have quite a few to choose from!\n" << "Which one "
                      "would you like?:" << std::endl;

    std::cout << "[1] 2005 Volkswagen Beetle ($8,000)";
}

// This menu will show you car quote, with price and quantity of upgrades
void carMenu() {

}

int main() {
    int carLevel, quoteNumber;
    double carCost;
    mainMenu();
    return 0;
}
