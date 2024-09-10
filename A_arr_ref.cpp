#include<iostream>
using namespace std;

void fun(int arr[]){
    cout<<sizeof(arr);
    arr[2]=32;

}
void fun2(int *arr){
    arr[4]=234;
}

int main(){

int a=10;
int *ptr=&a;
cout<<*ptr;

int arr[]={5,3,6,22,6,3};
// cout<<endl<<*arr;
// cout<<endl<<*(arr+2);
int sizearr= sizeof(arr)/sizeof (int);
fun(arr);
cout<<arr[2];
fun2(arr);
for(int i=0;i<sizearr;i++){
    cout<<endl<<arr[i]<<" ";
}



    return 0;
}