#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the year:"<<endl;
cin>>n;

if(n%400==0){
    cout<<"is leap yr.";
   
}
 else if(n%100==0){
        cout<<"isNOT leap year";
    }
    else if (n%4==0){
        cout<<"is leap year";
    }
    else{
        cout<<"is not leap year";
    }
    return 0;
}