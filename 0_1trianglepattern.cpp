#include<iostream>
using namespace std;
int main(){

    bool val=true;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++)
        {
            cout<< val;
            val=!val;
        }
        
        cout<<endl;
    }
    return 0;
}