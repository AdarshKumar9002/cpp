/*
Write a program that checks a list of tea types and serves tea for each type, except "Herbal Tea." If "Herbal Tea" is encountered, skip it using continue. If "No Tea" is encountered, stop the loop using break.
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
        string teaTypes[5] = {"Green Tea", "Herbal Tea", "Black Tea", "Lemon Tea", "No Tea"};

        for(int i = 0; i < 4; i++) {
            if(teaTypes[i] == "Herbal Tea") {
                cout << "Sorry we don't sell " << teaTypes[i] << endl;
                continue;
            }
            if( teaTypes[i] == "No Tea") {
                 cout << "Sorry we are out of tea.";
                break;;
            }

            cout << "Here is your " << teaTypes[i]  << endl;
        }

    return 0;
}
