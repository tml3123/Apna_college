#include<iostream>
using namespace std;

int subarr(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            //cout<<"("<<start<< "," <<end<<")"; 
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}


int main(){
int i;
int arr[5]={1,2,3,4,5};
int n=5;
subarr(arr,n);


return 0;
}