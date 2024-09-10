#include<iostream>
#define i int 
using namespace std;

 int main(){
i n =84655;
i res=0;
while(n>0){
    i lastdig=n%10;
    res=res*10+lastdig;
    n/=10;
}
cout<<res;

 }