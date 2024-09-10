#include<iostream>
#include<vector>
using namespace std;
int main(){
   /*   vector<int> vec={1,2,3,4};
     cout<<vec.size(); */
    
    vector<int> vec1(10,-1);
    cout<<vec1.size()<<"\n";

    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
}