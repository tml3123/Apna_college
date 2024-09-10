#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of arr :)"<<endl;
    cin>>n;
    int arr[n];
    int m;

    for(int i=0;i<n;i++){
        cin >> arr[i];
      
    }
      int max=arr[0];
       for(int i=0;i<n;i++){
    
       if(arr[i]>max){
        max=arr[i];

    }
      
       }
   cout<<endl<<max;
}