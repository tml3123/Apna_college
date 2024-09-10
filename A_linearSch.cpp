#include<iostream>
using namespace std;

int Lsrch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){

int arr[]={1,23,5,3,64,23,34};
int n=sizeof(arr)/sizeof(int);
int key=64;

cout<<Lsrch(arr,n,key);


    return 0;
}