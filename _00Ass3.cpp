// Question 1 : Write a C++ program to get a number from the user and print whether it's positive, negative or zero.

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "enter the number u want to enter" << endl;
    cin >> n;

    if (n < 0)
    {
        cout << "its -ve number";
    }
    else
    {
        cout << "its +ve number";
    }

    return 0;
}