/*
Write a program that asks the user if they want to add more sugar to their tea. Keep asking until they respond with "enough." Use a do-while loop for this.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string response;

    do
    {
        cout << "Do you want more sugar?" << endl;
        cin >> response;
    } while (response != "enough");

    return 0;
}