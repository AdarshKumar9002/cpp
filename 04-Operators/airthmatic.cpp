/*
Create a program that calculates the total price of tea cups. The user inputs the number of cups they want and the price per cup. The program should calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.
*/

#include <iostream>
using namespace std;
int main()
{
    int teaQuantity = 0;
    float price = 0;
    const float discount = 0.05;
    int amountLimitForDiscount = 500;
    int totalAmount = 0;

    cout << "How many Cups of tea Would you like?" << endl;
    cin>>teaQuantity;

    cout <<"Price of Tea?" <<endl;
    cin>>price;

    totalAmount = teaQuantity * price;

    if(totalAmount > amountLimitForDiscount) {
        totalAmount -= totalAmount*discount;
    }

    cout << "Your bill is: " << totalAmount << endl;

    return 0;
}