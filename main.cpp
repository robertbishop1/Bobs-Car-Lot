#include <iostream>
#include <iomanip>
#include <string>



// This menu shows the value of current car including upgrades
int vehicleMenu(int quoteNum, int vehicleValue, int
valueOfUps, int currentUpgrade) {
    // Prints vehicle selection menu
    std::cout << "Quote:{" << quoteNum << "}  Car($" << vehicleValue <<
              ")" << "E(" << currentUpgrade << ") Upgrades($" << valueOfUps
              << ")\n" << "Do you want to upgrade your car?\n" <<
              "[-/+1] Downgrade / Upgrade Engine\n" << "[ 2] Clear all "
                      "upgrades\n" << "[ 3] Reset car\n" << "[ 4] Buy Car!!!\n"
              << "What would you like to do?:\n";
}

int upgradeControl(int currentUpgrade) {
// This section returns the value of an upgrade

    switch (currentUpgrade) {
        case 0: currentUpgrade = 0;
            break;
        case 1: currentUpgrade = 100;
            break;
        case 2: currentUpgrade = 300;
            break;
        case 3: currentUpgrade = 600;
            break;
        case 4: currentUpgrade = 1000;
            break;
        case 5: currentUpgrade = 1500;
            break;
        default: std::cout << "We have an error";
    }

    return currentUpgrade;
}

void lotMenu() {
    // This menu displays the current selection on the car lot
    std::cout << "Welcome to Bob's used car lot and chop shop!\n" << "As you "
            "can see we have quite a few to choose from!\n" << "Which one "
                      "would you like?:" << std::endl;

    std::cout << "[1] 2005 Volkswagen Beetle ($8,000)\n" <<
              "[2] 2008 Pontiac G6 ($8,581)\n" <<
              "[3] 2004 Chevy S-10 ($10,500)\n" <<
              "[4] 2016 Jeep Patriot ($15,209)" <<
              "[5] 2012 Jeep Wrangler Sport ($24,390)\n" <<
              "Which car would you like?:";
}


int main() {
    // These are the values of vehicles in stock
    const int VWBEET = 8000;
    const int PONTG6 = 8581;
    const int CHEVS10 = 10500;
    const int JPPAT = 15209;
    const int JPWRANG = 24390;

    // Stores current quote number
    int quoteNum = 0;

    // Stores value of selected vehicle
    int vehicleValue;

    // Stores values of input to navigate menus
    int userChoice;

    // Stores which vehiles was selected for switch case
    int userChoiceVeh;

    // Stores current number of engine upgrades
    int currentUpgrade;

    // Stores cost of upgrades
    int valueOfUps = 0;


    // Calls the Lot Menu and gets user selection
    lotMenu();
    std::cin >> userChoiceVeh;

    switch (userChoiceVeh) {
        case 1: vehicleValue = VWBEET;
            quoteNum++;
            break;
        case 2: vehicleValue = PONTG6;
            quoteNum++;
            break;
        case 3: vehicleValue = CHEVS10;
            break;
        case 4: vehicleValue = JPPAT;
            break;
        case 5: vehicleValue = JPWRANG;
            break;
    }

    // Calls selected vehicle menu and gathers choice from user
    vehicleMenu(quoteNum,vehicleValue, valueOfUps, currentUpgrade);
    std::cin >> userChoice;
    if (userChoice == -1 || userChoice == 1)
    while (userChoice == -1 || userChoice == 1) {

        if (userChoice == -1 && currentUpgrade >= 0) {
            currentUpgrade--;
            quoteNum++;
            valueOfUps = upgradeControl(currentUpgrade);
            vehicleMenu(quoteNum, vehicleValue, valueOfUps,
                        currentUpgrade);
            std::cin >> userChoice;
        }
        else if (userChoice == 1 || userChoice == +1 && currentUpgrade <= 4) {
            currentUpgrade++;
            quoteNum++;
            valueOfUps = upgradeControl(currentUpgrade);
            vehicleMenu(quoteNum, vehicleValue, valueOfUps,
                        currentUpgrade);
            std::cin >> userChoice;
        }
        std::cout << valueOfUps;
    }

    currentUpgrade = upgradeControl(userChoice);

    return 0;
}
