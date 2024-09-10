#include <iostream>
using namespace std;
int main()
{
    int n = 10365;
    int sum = 0;
    // while (n > 0)
    // {
    //     int lastdigit = n % 10;

    //     sum += lastdigit;
    //     n = n / 10;
    // }

    // cout << "sum:" << sum << endl;

     while (n > 0)
    {
        int lastdigit = n % 10;
       if(n%2!=0){
        sum+=lastdigit;
       }
       
        n = n / 10;
    }
        cout << "sum:" << sum << endl;

}
