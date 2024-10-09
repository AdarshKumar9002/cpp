#include <iostream>
using namespace std;

void pourChai(int cups)
{
    cups += 5;
    cout << "Poured Cups: " << cups << endl;
}

int main()
{
    //    serveChai(10);
    int cups = 2;
    pourChai(cups);
    cout << "Total cups are " << cups << endl;

    return 0;
}

// Defination of function

void serveChai(int cups)
{
    cout << "Serving " << cups << " of chai.";
}