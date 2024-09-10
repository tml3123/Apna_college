#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

bool ispalidrome(char word[],int n){

int st=0;
int end=n-1;

while(st<end){
        if(word[st++]!=word[end--]){
            cout<<"not palidrome\n";
       return false;

     }
}
cout <<"valid palidrome";
return true;

}

int main(){

   char word[]="racecar";
   ispalidrome(word,strlen(word));

    return 0;
}