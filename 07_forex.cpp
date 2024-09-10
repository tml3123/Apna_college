#include <iostream>
using namespace std;
int main()
{
    int i;
    int sum = 0;
    for (i = 0; i < 10; i++)
    {

        sum = sum + i;
    }
    cout << sum << endl;

    int in = 0;
    while (in < 10)
    {
        cout << in << " ";
        in++;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << endl
             << "* * * *" << endl;
    }
    for (i = 5; i >= 0; i--)
    {
        cout << i << endl;
    }
    int n = 10365;
    while (n > 0)
    {
        int lastdigit = n % 10;
       
        n = n / 10;

        int sum = 0;
        sum += lastdigit;
        n = n / 10;
    }

    cout << "sum:" << sum << endl;
}