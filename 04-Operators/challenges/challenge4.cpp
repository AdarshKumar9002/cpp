#include <iostream>
using namespace std;

int main() {
    const int GREEN_TEA = 1;   // 0001
    const int BLACK_TEA = 2;   // 0010
    const int OOLONG_TEA = 4;  // 0100

    // Example stock, modify this value to represent different tea availability
    int teaStock = 3; // 3 means Green and Black are in stock (1 + 2)

    int selectedTea;
    cout << "==== Stock Check ====" << endl;
    cout << "1. Green Tea" << endl;
    cout << "2. Black Tea" << endl;
    cout << "4. Oolong Tea" << endl;
    cout << "Enter the number of your selected tea: ";

    cin >> selectedTea;

    // Validate user input
    if (selectedTea != GREEN_TEA && selectedTea != BLACK_TEA && selectedTea != OOLONG_TEA) {
        cout << "Please select a correct option (1, 2, or 4)." << endl;
        return 0;
    }

    // Check availability using bitwise AND with teaStock
    if (teaStock & selectedTea) {
        if (selectedTea == GREEN_TEA) {
            cout << "Green tea is in stock." << endl;
        } else if (selectedTea == BLACK_TEA) {
            cout << "Black tea is in stock." << endl;
        } else if (selectedTea == OOLONG_TEA) {
            cout << "Oolong tea is in stock." << endl;
        }
    } else {
        cout << "The selected tea is not in stock." << endl;
    }

    return 0;
}
