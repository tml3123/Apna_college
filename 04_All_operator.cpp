#include<iostream>
using namespace std;

int main(){
//unary operator
// int a=5;
//  a=a++;//post increment
//  int b=++a;// preincrement
//  cout<<a<<endl;
//  cout<<b<<endl;

 //assignments
cout<<endl<<"Assignment operator";
 int a=10;
 a +=5;
cout<<endl<<a;
a*=5;
cout<<endl<<a;
a/=5;
cout<<endl<<a;
a-=5;
cout<<endl<<a;


cout<<"relational operator";

a=3;
int b=3;
cout<<endl<<(a<=b)<<endl;
cout<<(a>b)<<endl;
cout<<(a==b)<<endl;
cout<<(a!=b)<<endl;
return 0;
}