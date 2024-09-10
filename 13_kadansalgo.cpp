#include<iostream>
using namespace std;
#define I int

int kadanesalgo(int *arr,int n){
    int max_sum=INT8_MIN;
  int currsum=0;

    for(I i=0;i<n;i++){
        currsum+=arr[i];
        max_sum=max(currsum,max_sum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<"max sum of subarr:---"<<max_sum<<endl;

}

int main(){

 int  arr[6]={ 3,-5,8,4,-6,8};
 int n=sizeof(arr)/sizeof(int );

kadanesalgo(arr,n);


 


}