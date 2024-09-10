#include <iostream>
using namespace std;
int main()
{
    int score;
    score = 100; // Assigning value to variable 'score'

    int balance = 500; // Declaring and initializing 'balance'
    balance = 100;     // Modifying value of 'balance'

    const int uid = 43234; // Declaring a constant 'uid'
    // uid = 5343;       // Uncommenting this will cause an error, as 'uid' is a constant

    return 0;
}