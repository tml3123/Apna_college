#include<iostream>
using namespace std;
int main(){
int n;
do{
cout<<"enter the number "<<endl;
cin>>n;
if (n%10==0){
    break;
}
cout<<n<<endl;
}while(true);
    return 0;

}