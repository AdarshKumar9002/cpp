#include <iostream>
using namespace std;


int main()
{
    // lamda
   auto preparedChai = [](int cups) {
         cout << "Preparing " << cups << " of chai." << endl;
    };

    preparedChai(4);

    return 0;
}
