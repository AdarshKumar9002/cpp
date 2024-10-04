/*
A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.
*/

#include <iostream>
using namespace std;
int main()
{
    int cupCount = 0;
    bool isMember = 0;
    string loyaltyBadge = "NO Badge";

    cout << "How many Cups of tea you bought?" << endl;
    cin >> cupCount;

    cout << "Are you a member for more than a year (enter 1 for yes and 0 for no)?" << endl;
    cin >> isMember;

    // Check is customer qualified for offer
   if(isMember || cupCount > 12) {
        cout << "Congrats! you are qualified for our tea subscription offer discount";
    } else {
         cout << "Sorry! you are not qualified for our tea subscription offer discount";
    }
    return 0;
}