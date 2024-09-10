#include<iostream>
using namespace std;
int main(){
    
    int j,i;
    char ch='A';
      
      for (i=1;i<=4;i++){
     
        for (j=1;j<=i;j++){
           cout<<ch++;
       
       
        }
        cout<<endl;
    }

    
      for (i=1;i<=4;i++){
         cout<<"*";
        for (j=1;j<=3;j++){
           if(i==1||i==4){
            cout<<"*";
           }
           else{
            cout<<" ";
           }
       
        }
        cout<<"*";
        cout<<endl;
    }

    
      for (i=1;i<=4;i++){
     
        for (j=4;j>=i;j--){
            cout<<j;
       
        }
        cout<<endl;
    }

    
 
}