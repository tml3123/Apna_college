#include<iostream>
using namespace std;
int main(){
        

        int size;
        cin>>size;

        int *arr=new int [size];

        int x=1;

        for(int i=0;i<=size;i++){
          arr[i]=x;
          cout<<arr[i]<<" ";
           x++;
        }      
     
        cout<<endl;
        return 0;
}