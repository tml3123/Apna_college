#include <iostream>
using namespace std;

int print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << endl;
    }
}
int sorting(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    print(arr, n);
}

int main()
{

    int arr[5] = {3, 53, 2, 45, 63};

    sorting(arr, 5);
    
    return 0;
}