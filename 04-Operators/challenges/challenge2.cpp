/*
Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the += assignment operator. Display the updated total.
*/
#include <iostream>
using namespace std;
int main()
{
    int teaBags = 0;
    const int extraBags = 10;

    cout << "How many tea bags do you have?" << endl;
    cin >> teaBags;

    // check eligibity for extra bags
    if (teaBags < 20)
    {
        teaBags += extraBags;
    }

    cout << "Your have " << teaBags << " tea bags." << endl;
    return 0;
}