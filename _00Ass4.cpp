#include<iostream>
using namespace std;
int main()
{
    //factorial

    int n=6,fact=1;
    for(int i=1;i<=n;i++){
     fact*=i;

    }
  cout<<"factorial:"<<fact<<endl;
    return 0;
}