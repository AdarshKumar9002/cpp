/*
Write a program that displays a tea brewing schedule. For each day of the week (outer loop), brew 2 cups of tea for breakfast, lunch, and dinner (inner loop).
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    string daysOfWeek[7] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };

    for (int i = 0; i < 7; i++) {
        cout << "Tea brewing schedule for " << daysOfWeek[i] << ":" << endl;

        for (int j = 0; j < 3; j++) {
            string meal;
            switch (j) {
                case 0:
                    meal = "Breakfast";
                    break;
                case 1:
                    meal = "Lunch";
                    break;
                case 2:
                    meal = "Dinner";
                    break;
                default:
                    break;
            }
            // Brew 2 cups of tea for each meal
            for (int k = 1; k <= 2; k++) {
                cout << "  Brewing cup " << k << " for " << meal << endl;
            }
        }
        cout << endl; // Print an empty line for better readability between days
    }

    return 0;
}
