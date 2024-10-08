/*
Create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-insensitive), using a do-while loop.
*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string userInput;
    do
    {
        cout << "Do you want more tea?(yes/no)" << endl;
        cin >> userInput;
    } while (userInput != "no");
    
return 0;
}