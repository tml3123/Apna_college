#include<iostream>
using namespace std;

short int bintodec(int binnum){

int n=binnum;
int decnum=0;
int pow=1;
while(n>0){
    int lastdig=n%10;
    decnum+=lastdig*pow;
    pow =pow*2;
    n=n/10;

}
cout<<decnum<<endl;               




}


int main(){
    

    bintodec(101);
    // cout<<sizeof(double)<<endl;
    // cout<<sizeof(long double)<<endl;
    // cout<<sizeof(int)<<endl;
    // cout<<sizeof(short int);


    return 0;
}