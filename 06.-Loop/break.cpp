/*
Write a program that keeps serving tea until the user says they’ve had enough (input 'stop'). Use a break statement to exit the loop when the user types 'stop'.
*/

#include <iostream>
using namespace std;
int main()
{
    string response;

    // Method 1
    /* for (int i = 0;true; i++)
     {
         cout << "Do you want more tea (type 'stop' to exit)?" << endl;
         cin >> response;
         if (response == "stop")
         {
             break;
         }
         }
    */ 

    // Method 2
     while (true)
     {
         string response;
         cout << "Do you want more tea (type 'stop' to exit)?" << endl;
         cin >> response;
         if (response == "stop")
         {
             break;
         }
         cout << "Here is you another cup of tea." << endl;
     }
     

    cout << "No more tea will be served";

    return 0;
}