#include <iostream>
using namespace std;
#define i int

void maxprofit(i *price, i n)
{
    i bestbuy[100000];
    bestbuy[0] = INT8_MAX;

    for (i t = 1; t < n - 1; t++)
    {

        bestbuy[t] = min(bestbuy[t - 1], price[t - 1]);
        cout << bestbuy[t] << ",";
    }
    int maxprofit=0;
    for(int t=0;t<n;t++){
        int currprofit=price[t]-bestbuy[t];
        maxprofit =max( maxprofit,currprofit);
    }
    cout<<"max profit ="<<maxprofit<<endl;
    cout << endl;
}

int main()
{
    i price[6] = {7, 1, 5, 3, 6, 4};
    i n = sizeof(price) / sizeof(int);
    cout<<n;
    maxprofit(price, n);

    return 0;
}