#include <iostream>
using namespace std;

// Declaration of function
void serveChai(int cups);

int main()
{
   serveChai(10);
   
return 0;
}

// Defination of function

void serveChai(int cups) {
    cout << "Serving " << cups << " of chai.";
}