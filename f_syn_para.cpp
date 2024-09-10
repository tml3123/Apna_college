#include <iostream>
using namespace std;

int sum(int a, int b=9)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int s = sum(4);
    cout << s<<endl;


    return 0;
}