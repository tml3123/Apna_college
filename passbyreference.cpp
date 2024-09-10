#include<iostream>
using namespace std;
//pass by value
void change_ref(int *ptr)
{

*ptr=459;
cout<<*ptr;

}
int main(){
    
    int a=10;
    
    change_ref(&a);
    cout<<endl<<a;
    //pass by reference
    int &g=a;
    cout<<g;
    return  0;

}