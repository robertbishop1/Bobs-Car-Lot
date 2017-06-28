#include <iostream>
#include <iomanip>
#include <string>

const int VWBEET = 8000;
const int PONTG6 = 8581;
const int CHEVS10 = 10500;
const int JPPAT = 15209;
const int JPWRANG = 24390;



// This menu shows the value of current car including upgrades
int vehicleMenu(int currentVeh) {
   // Holds value of current quote number
   int quoteNum = 0;
   // Stores Value of Upgrades
   int valueOfUps = 0;
   int vehicleValue;
   // Stores number of Engine Upgrades
   int currentUpgrade = 0;
   int userChoice;

   // Gets vehicle price from switch
   switch (currentVeh) {
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

    // Prints vehicle selection menu
    std::cout << "Quote:{" << quoteNum << "}  Car($" << vehicleValue <<
              ")" << "E(" << currentUpgrade << ") Upgrades($" << valueOfUps
              << ")\n" << "Do you want to upgrade your car?\n" <<
              "[-/+1] Downgrade / Upgrade Engine\n" << "[ 2] Clear all "
            "upgrades\n" << "[ 3] Reset car\n" << "[ 4] Buy Car!!!\n"
            << "What would you like to do?:\n";

    std::cin >> userChoice;

    // This section of code controls upgrades and downgrades
    if (userChoice == -1 || userChoice == +1 || userChoice == 1)

        if (userChoice == -1 && currentUpgrade >=0)
            currentUpgrade--;

        else if (userChoice == 1 || userChoice == +1 && currentUpgrade <=4)
            currentUpgrade++;
    std::cout << "Did we make it jimmy?";

    switch (currentUpgrade) {
        case 0: if(currentUpgrade == 0)
                    currentVeh;
            break;
        case 1: if (currentUpgrade == 1)
                    valueOfUps == 100;
            currentVeh;
            break;
    }

}

void mainMenu() {
    int currentVeh;
    std::cout << "Welcome to Bob's used car lot and chop shop!\n" << "As you "
            "can see we have quite a few to choose from!\n" << "Which one "
                      "would you like?:" << std::endl;

    std::cout << "[1] 2005 Volkswagen Beetle ($8,000)\n" <<
              "[2] 2008 Pontiac G6 ($8,581)\n" <<
              "[3] 2004 Chevy S-10 ($10,500)\n" <<
              "[4] 2016 Jeep Patriot ($15,209)" <<
              "[5] 2012 Jeep Wrangler Sport ($24,390)\n" <<
              "Which car would you like?:";
    std::cin >> currentVeh;
    vehicleMenu(currentVeh);
}


int main() {
    mainMenu();
    return 0;
}
