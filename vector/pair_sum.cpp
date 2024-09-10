#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> arr, int target)
{
    int st = 0, end = arr.size() - 1;
    int CurrentSum = 0;
    vector<int> ans;

    while (st < end)
    {

        CurrentSum = arr[st] + arr[end];
        if (CurrentSum == target)
        {
            arr.push_back(st);
            arr.push_back(end);
            return ans;
        }
        else if (CurrentSum > target)
        {
            end--;
        }
        else
        {
            st++;
        }
    }
    return ans;
}
int main()
{

    vector<int> arr = {4, 6, 8, 12, 15};
    int target = 16;
    vector<int> ans= pairSum(arr, target);
    cout<<"your ans"<<arr[0]<<","<<arr[1];
    return 0;
}
