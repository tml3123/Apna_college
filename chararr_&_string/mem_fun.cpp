#include<iostream>
#include<string>
using namespace std;
int main(){

   string str="hello tarun how are u";

   cout<<str.at(2)<<endl;
   cout<<str.substr(0,15)<<endl;
   int id=str.find("hy");
   cout<<id;

    return 0;
}