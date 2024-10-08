/*
Write a program that keeps asking the user to input the number of tea bags they have left. Stop when the number of bags is 0, and print a message that they are out of tea bags.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int teaBagsQuantity;
    while (teaBagsQuantity != 0)
    {
        cout << "How many tea bags have left?" << endl;
        cin >> teaBagsQuantity;
    }

    cout << "We are out of bags.";

    return 0;
}