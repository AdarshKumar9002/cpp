/*
Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.
*/

#include <iostream>
using namespace std;
int main()
{
    int cupCount = 0;
    bool isStudent = 0;

    cout << "Are you a Student (enter 1 for yes and 0 for no)?" << endl;
    cin >> isStudent;

     cout << "How many Cups of tea you bought?" << endl;
    cin >> cupCount;

    if(isStudent || cupCount >= 15) {
        cout << "Congrats! you are eligible for our tea subscription discount";
    } else {
         cout << "Sorry! you are not eligible for our tea subscription discount";
    }

    return 0;
}