/*
challenge 3 (Favorite Tea Input):
Write a program that takes thc user's favorite tea as input using getline and also asks how many cups of tea they want using
cin. Display the result in a fun.
*/

#include <iostream>
using namespace std;
int main()
{
    string favouriteTea;
    int teaQuantity;
    cout << "Enter Your favourite tea: " << endl;
    getline(cin, favouriteTea);

    cout << "How many cup of " << favouriteTea << " do you want?" << endl;
    cin >> teaQuantity;

    cout << "Sir, you have ordered " << teaQuantity << " cups of " << favouriteTea << endl;
    return 0;
}