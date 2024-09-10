#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the size of array"<<endl;
   cin>>n;

   int arr[n];
   int len=sizeof(arr)/sizeof(int);

   for(int i=0;i<=len-1;i++){
     
     cin>>arr[i];

   }
   
   for(int i=0;i<=len-1;i++){
   
   cout<<arr[i]<<"  ";
   
   }
   cout<<endl;
   


    return 0;
}