/*
Write a program that asks the user for their favorite tea. If they choose "Oolong," print a message saying, "You have excellent taste!"
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string favouriteTea;
    cout<< "Enter your favourite tea." << endl;
    getline(cin, favouriteTea);

    if(favouriteTea == "Oolong") {
        cout << "You have excellent taste!";
    }

return 0;
}