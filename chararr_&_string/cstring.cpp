#include<iostream>
#include<cstring>
using namespace std;
int main(){



   cout<<"=====copy string=========================="<<endl;
    char str[100];
    char ss[100]="hello nobita";
    strcpy(str, ss);
    cout<<str;

    cout<<"===========concatenate============="<<endl;
     
     char  n[80]="nobita and";
     char  s[80]="get merried";

    strcat(n,s);
    cout<<n;

    cout<<"=============compare two string============"<<endl;


     char t[10]="doraemon";
     char e[5]="x";
    
     cout<< strcmp(t,e);

    

   

}