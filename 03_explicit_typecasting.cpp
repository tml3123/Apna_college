#include<iostream>
using namespace std;
int main(){
    cout<<(char)('A'+3)<<endl;
    cout<<(int)('A'+3)<<endl;
    cout<<(float)('A'+2);
    
     cout<<endl<<(int)((char)((bool)6+'A'));

    return 0;
}