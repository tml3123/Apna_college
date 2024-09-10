#include <iostream>
using namespace std;

int maxsubarr(int *arr, int n)
{

  int max_sum = INT8_MIN;
  for (int start = 0; start < n; start++)
  {
      int currtsum = 0;


    for (int end = start; end < n; end++)
    {

      currtsum += arr[end];

      max_sum = max(max_sum, currtsum);
    }
  }
  cout << "the maximum number is :" << max_sum;

  return 0;
}

int main()
{

  int arr[6] = {2, -3, 6, -5, 4, 2};
  int n = sizeof(arr) / sizeof(int);
  maxsubarr(arr, n);

  return 0;
}