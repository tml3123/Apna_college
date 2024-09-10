#include <iostream>
using namespace std;

int mul(int a, int b = 8)
{
    return a * b;
}

bool iseven(int z)
{
    if (z % 2 == 0)
    {
        cout << "number is even";
    }
    else
    {
        cout << "number is odd";
    }
}

int factorial_(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "factorial  :)" << fact << "\n";
}

int main()
{
    int n;
    cout << "ENTER THE NUMBER  :)" << endl;
    cin >> n;

    factorial_(n);

    return 0;
}