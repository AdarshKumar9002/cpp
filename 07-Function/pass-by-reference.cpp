#include <iostream>
using namespace std;

// & make it call by reference
void pourChai(int &cups)
{
    cups += 5;
    cout << "Poured Cups: " << cups << endl;
}

int main()
{
    int cups = 2;
    pourChai(cups);
    cout << "Total cups are " << cups << endl;

    return 0;
}
