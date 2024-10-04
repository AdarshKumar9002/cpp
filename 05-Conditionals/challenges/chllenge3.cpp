/*
Write a program that checks the temperature of tea water input by the user:

If the temperature is above 100°C, print "Too hot!"
If the temperature is between 80°C and 100°C, print "Perfect temperature."
If the temperature is below 80°C, print "Too cold!"
*/

#include <iostream>
using namespace std;
int main()
{
    int temperature;

    cout << "Enter the temperature of tea water" << endl;
    cin >> temperature;

    if (temperature > 100)
    {
        cout << "Too hot!";
    }
    else if (temperature >= 80 && temperature <= 100)
    {
        cout << "Perfect temperature.";
    }
    else
    {
        cout << "Too cold!";
    }
    return 0;
}