#include<iostream>
using namespace std;
int main()
{
    int i,j;
  int n=5;
    for(i=1;i<=n;i++){

    for(j=1;j<=n-i;j++){
        cout<<" ";
    }    

    for(j=i;j>=1;j--){
        cout<<j;
    }
   
   for(j=2;j<=i;j++){
    cout<<j;
   }


        cout<<endl;

    }
}