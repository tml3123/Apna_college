#include <iostream>
using namespace std;
int printarr(int arr[],int n){
     
for(int i=0;i<n;i++){
    cout<<arr[i]<<",";
}

return 0;
}
int main()
{
    int arr[] = {1, 23, 5, 3, 64, 23, 34};
    int n = sizeof(arr) / sizeof(int);
    int copyarr[n];
    for (int i=0;i<n;i++){
        int j=n-i-1;
        copyarr[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        arr[i]=copyarr[i];
    }

    printarr(arr,n);

}