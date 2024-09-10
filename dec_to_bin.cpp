#include<iostream>
using namespace std;

short int decbin(int decnum){
    int n=decnum;
     int pow=1;
     int binnum=0;


while(n>0){
    int rem=n%2;
    binnum+= rem*pow;
    n=n/2;
    pow*=10;
}

cout<<binnum;
}


int main(){


decbin(5);


}