#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}



void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int prev=i-1;
        while(prev>=0&&arr[prev]>temp){

             arr[prev + 1] = arr[prev]; 
                prev--;
            
            
        }
        arr[prev+1]=temp;
        
    }
    print(arr,n);
}


int main(){
int arr[5]={5,4,1,3,2};
// int n=sizeof(arr)/sizeof(int);
insertionsort(arr,5);
return 0;
}