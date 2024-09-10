#include<iostream>
using namespace std;

int funbin( int *arr,int n,int key){
    int st=0,end=n-1;
    
    while(st<=end){
       int mid=(st+end)/2;
       if(arr[mid]==key){
        return mid; 
       }
       else if(arr[mid]<key){
        st=mid+1;
       }
       else if(arr[mid]>key){
        end=mid-1;
       }

    }
    return -1;
}

int main(){
    int arr[]={1,3,6,8,9};
  
    int n=sizeof(arr)/sizeof(int);
     
    cout<<funbin(arr,n,8);
    return 0;



return 0;
}