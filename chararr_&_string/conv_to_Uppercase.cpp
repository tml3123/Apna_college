#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

void touppercase(char word[],int n){

    for(int i=0;i<n;i++){
     
     char ch=word[i];
        if(ch>='A'&&ch<'Z'){
            continue;
        }else{
             word[i]=ch-'a'+'A';
        }
    }
}
int main(){

    char word[]="hELlo";

    char t[]="A";
    cout<<int (t);
    
    touppercase(word,strlen(word));

    cout<<word;

}