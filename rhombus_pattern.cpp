#include<iostream>
using namespace std;
int main(){

    int i,j;
  int n=5;
   for(i=0;i<=n;i++){
  
  for(j=1;j<=n-i;j++){
    cout<<" ";
  }

  for(j=1;j<=n;j++){
    cout<<"*";
  }


    cout<<endl;
   }


return 0;


}