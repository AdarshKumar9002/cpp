#include <iostream>
using namespace std;

// Declaration of function
void serveChai(int cups);

void serveChai(string teaType = "Masala Tea") {
    cout << "Serving " << teaType << endl;
}

int main()
{
   serveChai(10);
   serveChai("Green");
   
return 0;
}

// Defination of function

void serveChai(int cups) {
    cout << "Serving " << cups << " of chai." << endl;
}
