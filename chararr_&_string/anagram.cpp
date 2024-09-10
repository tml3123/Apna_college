#include<iostream>
#include<string>
using namespace std;
bool sortanagram(string str1, string str2){

if (str1.length() !=str2.length()){
    cout<<"not valid anagram:";
  return false;
}

int count[26]={0};
for(int i=0;i<str1.length();i++){
    int idx=str1[i]-'a';
    count[idx]++;// The count array tracks how many times each letter (from 'a' to 'z') appears in the string str1.
}

for(int i=0;i<str2.length();i++){

    int  idx2=str2.length()-'a';
    if (count[idx2]==0){
          cout<<"not valid anagram:";
      return false;
    }
    count [idx2]--;
}
cout<<"valid analog";
return true;
}
int main(){

    string str1="anagram";
    string str2="nagaram";

    sortanagram(str1,str2);
}