/*
Write a program that offers different tea brewing methods. The user selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and the program prints the instructions for the selected brewing method. Use a switch statement to handle the selections.
*/


#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Select your tea brewing method:\n";
    cout << "1. Boiling\n";
    cout << "2. Steeping\n";
    cout << "3. Iced Tea\n";
    cout << "Enter your choice (1-3): ";
    
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Boiling method:\n";
        cout << "1. Boil water.\n";
        cout << "2. Add tea leaves or tea bag.\n";
        cout << "3. Let it steep for 3-5 minutes.\n";
        cout << "4. Pour and enjoy your tea!\n";
        break;
    case 2:
        cout << "Steeping method:\n";
        cout << "1. Heat water to just below boiling point.\n";
        cout << "2. Pour water over tea leaves or tea bag.\n";
        cout << "3. Let it steep for 3-7 minutes, depending on the tea type.\n";
        cout << "4. Strain and enjoy your tea!\n";
        break;
    case 3:
        cout << "Iced Tea method:\n";
        cout << "1. Brew tea using the boiling or steeping method.\n";
        cout << "2. Let the tea cool down.\n";
        cout << "3. Pour over ice and add lemon or sugar if desired.\n";
        cout << "4. Serve chilled and enjoy!\n";
        break;
    default:
        cout << "Invalid choice. Please select a valid option (1-3).\n";
        break;
    }

    return 0;
}
