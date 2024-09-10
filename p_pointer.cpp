#include<iostream>
using namespace std;


void changeA(int a){
  a=30;
  cout<<a;
}
int main(){

  int a=10;

int *ptr= &a;
int **pptr=&ptr;
int ***prr=&pptr;
int ****tt=&prr;

cout<<*(&ptr)<<" + "<<***(&pptr)<<endl;
 cout<<*(&a)<<endl;
// cout<<*ptr<<endl;
// *ptr=20;
// cout<<***prr;

// int *ptr=NULL;
//  cout<<ptr;

// changeA(a);

// cout<<endl<<a;
    return 0;
}