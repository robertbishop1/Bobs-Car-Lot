# Bobs-Car-Lot
Welcome to Bob's Used Car lot.
We need a program using functions that allows users to get a quote on a car and its upgrades, and then modify that quote.
The program has four fundamental parts

Part 1

Use the following menu and prices, make sure the input is valid, use appropriate loops and decision structures. The item to be selected is in the brackets:

Welcome to Bob's used car lot and chop shop!
As you can see we have quite a few to choose from!
Which one would you like?:
[1] 2005 Volkswagen Beetle ($8,000)
[2] 2008 Pontiac G6 ($8,581)
[3] 2004 Chevy S-10 ($10,500)
[4] 2016 Jeep Patriot ($15,209)
[5] 2012 Jeep Wrangler Sport ($24,390)


Part 2

After choosing a car off the user some engine upgrades. These upgrades can be from 0 (no upgrades) to 5 maximum upgrade. You need a nice loop for this too.

Upgrades are $100 per level plus the cost of lower upgrades

Example: Level 1 upgrade is $100
Example: Level 2 upgrade is $100 + $200 = $300
Example: Level 3 upgrade is $100 + $200 + $300 = $600
etc etc etc etc etc etc etc etc etc etc etc etc etc...

Once you have determined a car and a starting modification level use the following code to print out the quote level, the car's cost and the engine level and cost. Add whatever code is needed to ensure that the money prints out correctly with 2 decimal places

cout << "{" << quoteNumber++ << "} ";
cout << " Car($" << carCost << ")"; 
cout << " E(" << engineLevel << ")"; 
cout << " Upgrades($" << upgradeCost << ")" << endl ;

Part 3

Use the following menu to allow the customer to modify his car, change the car choice or options or buy the car. Use appropriate decision structures and loops to manage this part. If the user resets the car start the process all over. remember the quote number is the number for the specified car.


Do you want to upgrade your car?
[-/+1] Downgrade / Upgrade Engine
[   2] Clear all upgrades
[   3] Reset car
[   4] Buy Car!!!
What would you like to do?:

Part 4

When the user buys the car, print out the Bill including the car costs, the upgrade costs and the total cost.

Put this at the end of your code or where appropriate

cout << "Press ENTER to continue";
cin.ignore();
cin.get();

Create your program using appropriate functions including values passed and returned.

Ensure that constants as needed are create and all variable names are appropriate. you should also ensure that the indenting is correct as shown in the book.

Please load only the zipped main.cpp file - not the entire project
