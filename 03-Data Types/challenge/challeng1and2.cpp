/*
Challenge 1 (Tea information display):
Write a program that declares variables to store the type of tea, its price per kilogram(float), and its rating(char). Use data types efffetively and print them in a format output using escape sequnce.

challenge 2 (Modify Tea Prices):
Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display
rounded new price using explicit casting.
*/

#include <iostream>
using namespace std;
int main()
{

    // Challenge 1
    string teaType = "lemon Tea";
    float teaPricePerKg = 50;
    char teaRating = 'A';
    cout <<"Type of the Tea: " << teaType << "\nTea Price Per Kilogram: " << teaPricePerKg << "\nTea Rating: " << teaRating << endl;

    // Challenge 2
    int basePrice = 0;
    float teaPriceHikeRate = 0.1;
    float totalPrice = 0;
    cout << "Enter the tea's Base price: " << endl;
    cin >> basePrice;

    totalPrice = (float)basePrice + ((float)basePrice * teaPriceHikeRate);
    cout << "Tea Price: " << (int)totalPrice << endl;

    return 0;
}