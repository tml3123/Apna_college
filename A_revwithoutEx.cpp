#include <iostream>
using namespace std;
int fnarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
int main()
{
    int arr[] = {1, 23, 5, 3, 64, 23, 34};
    int n = sizeof(arr) / sizeof(int);
    int start=0,end=n-1;
    for(int i=0;i<n;i++)
    {
      while(start<end){
        // int temp=arr[start];
        //  arr[start]=arr[end];
        //  arr[end]=temp;

        //inbuild fn
        swap(arr[start],arr[end]);
         start++;
         end--;
      }
    }

     fnarr( arr, n);
}