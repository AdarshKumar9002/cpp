#include <iostream>
using namespace std;
int main()
{
    float teaPrice = 49.99;
    int roundedTeaPrice = (int)teaPrice;

    int teaQuantiy = 2;
    double totalPrice = teaPrice * teaQuantiy;

    cout << totalPrice <<endl;

return 0;
}