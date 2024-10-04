/*
Write a program that allows a user to input the number of tea bags they have. Assign additional bags to them based on certain conditions (e.g., if they have fewer than 10 bags, give them 5 extra). Update the original number using assignment operators.
*/

#include <iostream>
using namespace std;
int main()
{
    int numberOfTeaBags = 0;
    const int extraBags = 5;

    cout << "How many tea bags do you have?" << endl;
    cin>>numberOfTeaBags;


// check eligibity for extra bags
    if(numberOfTeaBags < 10) {
        numberOfTeaBags += extraBags;
    }

    cout << "Your have " << numberOfTeaBags << " tea bags." << endl;

    return 0;
}