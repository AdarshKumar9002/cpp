/*
Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.
*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string userOrder;
    cout << "What would you like to order"<< endl;
    getline(cin,userOrder);

    if(userOrder == "Green Tea") {
        cout << "Order Confirmed";
    }

return 0;
}