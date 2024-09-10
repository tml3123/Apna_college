#include<iostream>
using namespace std;

int print(int arr[],int n){
    for(int i=0;i<n;i++){
     cout<<arr[i]<<endl;
    }
}
int selection(int arr[],int n){
  
  for( int i=0;i<n-1;i++){
    int minind=i;
   
    for(int j=i+1;j<n;j++){

        if(arr[j]<arr[minind]){
            minind=j;
        }

        swap(arr[i],arr[minind]);
    }

  }
print(arr,n);
    
}

int main(){
int arr[6]={7,3,5,8,1,0};
selection(arr,6);


}