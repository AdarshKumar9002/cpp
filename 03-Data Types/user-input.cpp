#include <iostream>
using namespace std;
int main()
{
    string userTea;
    int teaQuantity;

    cout << "What would you like to order? \n";
    getline(cin, userTea);

// ask for quantity
    cout << "How many cups of " << userTea << " Would you like to order? \n";
    cin >>teaQuantity;

    cout <<"You have ordered " << teaQuantity << " cup of " << userTea <<endl;
     

return 0;
}