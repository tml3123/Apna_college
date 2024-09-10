#include<iostream>
using namespace std;

void print(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}



void sortchar(char arr[],int n){
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
char ch[5]={'e','q','f','b','m'};
// int n=sizeof(arr)/sizeof(int);
sortchar(ch,5);
return 0;
}