#include <iostream>
#include <iomanip>
#include <string>



// This menu shows the value of current car including upgrades
int vehicleMenu(int userChoiceVeh, int quoteNum, int vehicleValue) {

    // Stores number of Engine Upgrades
    int currentUpgrade = 0;
    int userChoice;

    while (userChoice != 4){
    // Gets vehicle price from switch


    // Prints vehicle selection menu
    std::cout << "Quote:{" << quoteNum << "}  Car($" << vehicleValue <<
              ")" << "E(" << currentUpgrade << ") Upgrades($" << valueOfUps
              << ")\n" << "Do you want to upgrade your car?\n" <<
              "[-/+1] Downgrade / Upgrade Engine\n" << "[ 2] Clear all "
                      "upgrades\n" << "[ 3] Reset car\n" << "[ 4] Buy Car!!!\n"
              << "What would you like to do?:\n";
    }
}

int upgradeControl(int vehicleChoice) {
    int valueOfUps = 0;
    int currentUpgrade = 0;
    // This section of code controls upgrades and downgrades
    if (userChoice == -1 || userChoice == 1)


        if (userChoice == -1 && currentUpgrade >=0)
            currentUpgrade--;

        else if (userChoice == 1 || userChoice == +1 && currentUpgrade <=4)
            currentUpgrade++;
    std::cout << "Did we make it jimmy?";

    switch (currentUpgrade) {
        case 0: vehicleMenu(valueOfUps);
            break;
        case 1: if (currentUpgrade == 1)
                valueOfUps == 100;
            break;
    }
}

void lotMenu() {
    int userChoice;
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
            quoteNum++;
            break;
        case 4: vehicleValue = JPPAT;
            quoteNum++;
            break;
        case 5: vehicleValue = JPWRANG;
            quoteNum++;
            break;
    }

    // Calls selected vehicle menu and gathers choice from user
    vehicleMenu(userChoiceVeh,quoteNum,vehicleValue);
    std::cin >> userChoice;

    return 0;
}
