/*
Write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it’s closed.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int hour;

    cout << "Enter the curren hour (0-23)?" << endl;
    cin >> hour;

    if (hour >= 8 && hour <= 18)
    {
        cout << "Shop is Open at this hour";
    } else {
        cout << "Sorry, The shop is close at this hour";
    }
    return 0;
}