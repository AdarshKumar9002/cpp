/*
A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.
*/

#include <iostream>
using namespace std;
int main()
{
    int numberOfCupsBought = 0;
    string loyaltyBadge = "Bronze";

    cout << "How many Cups of tea you bought?" << endl;
    cin >> numberOfCupsBought;

    // Update the loyalty badge
    if (numberOfCupsBought >= 10 && numberOfCupsBought <= 20)
    {
        loyaltyBadge = "Silver";
    }
    if (numberOfCupsBought > 20)
    {
        loyaltyBadge = "Gold";
    }

    cout << "Your loyalty status is " << loyaltyBadge << endl;

    return 0;
}