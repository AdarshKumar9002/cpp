/* 
Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.
*/

#include <iostream>
using namespace std;
int main()
{
    int teaPacks = 0;
    float pricePerPack = 0, taxRate = 0.10, totalPrice;

    cout << "How many tea packs do you want?" << endl;
    cin >> teaPacks;

    cout << "What is the price of a single tea pack? " << endl;
    cin >> pricePerPack;

    totalPrice = teaPacks * pricePerPack;
    totalPrice += totalPrice * taxRate;

    cout <<"Total Price: " << totalPrice;
 

return 0;
}