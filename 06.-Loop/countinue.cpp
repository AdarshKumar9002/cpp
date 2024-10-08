/*
Write a program that skips brewing green tea if the user dislikes it. Use a continue statement to skip over green tea but brew other types of tea in a list.
*/

#include <iostream>
using namespace std;
int main()
{
    string teaTypes[3] = {"Green Tea", "Black Tea", "Lemon Tea"};

    for(int i = 0; i < 3; i++) {
        if(teaTypes[i] == "Green Tea") {
            cout << "Skipping the " <<teaTypes[i] << endl;
            continue;
        }
        cout << "Brewing " <<teaTypes[i] <<endl;
    }
return 0;
}