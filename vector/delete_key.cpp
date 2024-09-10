#include<iostream>
using namespace std;

void fun()
{
    /* for saving the memory leakage we use delete keyword */
    /* that program is dynamic but it is also used in static allocation */
        int size;
        cin>>size;

        int *arr=new int [size];

        int x=1;

        for(int i=0;i<=size;i++){
          arr[i]=x;
          cout<<arr[i]<<" ";
           x++;
        }
        cout<<endl;
        delete []arr;//free memory

}
int main(){

    fun();
 
    
    
    return 0;
}