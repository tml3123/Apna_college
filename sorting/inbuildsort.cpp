#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[8]={2,4,1,4,5,6,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr+3,arr+6);
    cout<<"accending order:";

    for(int i=0;i<n;++i){
        {
            cout<<" "<<arr[i]<<" ";
        }
        
    }
    sort(arr,arr+8,greater<int>());
    cout<<"decending order:";
    for(int i=0;i<n;++i){
        {
            cout<<" "<<arr[i]<<" ";
        }
        
    }
    return 0;
}