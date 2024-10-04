/*
Create a program that asks the user for their age. If the user is older than 18, allow them to proceed with purchasing tea; otherwise, print a message saying they are too young to purchase.
*/

#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "Enter your age" << endl;
    cin >> age;

    if(age >= 18) {
        cout << "You are eligible to purchage the tea";
    } else {
        cout << "Sorry you are too young to purchage the tea";
    }
return 0;
}