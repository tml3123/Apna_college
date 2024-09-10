#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void revchararr(char str[], int n)
{

    int st = 0;
    int end = n - 1;
    for (int i = 0; i < n; i++)
    {

        while (st < end)
        {
            swap(str[st], str[end]);
            st++;
            end--;
        }
    }
}

int main()
{
    char str1[] = "taran";
    // int n=sizeof(str1)/sizeof(int);
    revchararr(str1, strlen(str1));
    cout << str1;
    return 0;
}