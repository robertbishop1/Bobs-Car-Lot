#include <iostream>
#include <iomanip>
#include <string>

const int VWBEET = 8000;
const int PONTG6 = 8581;
const int CHEVS10 = 10500;
const int JPPAT = 15209;
const int JPWRANG = 24390;

int currentVeh;
int quoteNum;

// This menu shows the value of current car including upgrades
int carMenu(int) {

   switch (currentVeh) {
       case 1: currentVeh = 8000;
           break;
   }

    std::cout << "Quote:{" << quoteNum << "}  Car($" << currentVeh <<
              ")";

}

void mainMenu() {
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
    carMenu(currentVeh);
}


int main() {
    int carLevel, quoteNumber;
    double carCost;
    mainMenu();
    return 0;
}
