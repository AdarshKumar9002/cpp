/*
Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea.
Green Tea: $2
Black Tea: $3
Oolong Tea: $4
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int choice = 0;
    double price = 0;

    cout << "Select your tea\n";
    cout << "1. Green Tea\n";
    cout << "2. Black Tea\n";
    cout << "3. Oolong Tea\n";
    cout << "Enter your choice in number: \n";
    cin>> choice;
    
    switch (choice)
    {
    case 1:
        price = 2.00;
        cout << "You have selected Green Tea.\n";
        cout << "Price: $" << price;
        break;
    
    case 2:
        price = 3.00;
        cout << "You have selected Black Tea.\n";
        cout << "Price: $" << price;
        break;
    
    case 3:
        price = 4.0;
        cout << "You have selected Oolong Tea.\n";
        cout << "Price: $" << price;
        break;
    
    default:
        cout << "Invalid Choice!. Please select a correct option.";
        break;
    }

return 0;
}