/*
    Write a program that brews multiple cups of different types of tea. For each type of tea, brew 3 cups using a nested loop.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string teaTypes[5] = {"Oolong Tea","Orange Tea","Green Tea", "Black Tea", "Lemon Tea"};

    for(int i = 0; i < 5; i++) {
        cout << "Brewing " << teaTypes[i] << "..." << endl;

        for(int j = 1 ; j <= 3; j++) {
            cout << "Brewing" << j << " cup of " << teaTypes[i] << endl;
        }
    }

    cout << "All tea is ready.";

return 0;
}