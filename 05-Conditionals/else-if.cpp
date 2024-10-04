/*
A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount.
More than 20 cups: 20% discount
Between 10 and 20 cups: 10% discount
Less than 10 cups: No discount
*/

#include <iostream>
using namespace std;
int main()
{
    int cupOrderd = 0;
    const double pricePerCup = 20;
    double totalPrice, discount;

    cout << "How many Cup do you orderd?" << endl;
    cin >> cupOrderd;

    totalPrice = cupOrderd * pricePerCup;


    if (cupOrderd > 20)
    {
        discount = 0.20;
    }
    else if (cupOrderd >= 10 && cupOrderd <= 20)
    {
        discount = 0.10;
    }
    else
    {
        discount = 0;
    }
    totalPrice -= totalPrice * discount;
    cout << "Your bill is " << totalPrice;
    return 0;
}