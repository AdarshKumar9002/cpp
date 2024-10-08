/*
Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.
*/

#include <iostream>
using namespace std;
int main()
{
    int order = 0;
    cout << "How many cup of Tea do you want?" << endl;
    cin >> order;

    while (order > 0)
    {
       cout << "Serving a Cup of tea \n" << order << " remaining" << endl;
       order--;
    }

    cout << "All tea cups are served";
    
return 0;
}