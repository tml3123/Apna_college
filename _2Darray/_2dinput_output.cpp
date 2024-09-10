#include<iostream>
using namespace std;
int main(){
  int mat[2][2]={{2,4},{4,6}};
  for(int i =0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<mat[i][j];
    }
    cout<<endl;
  }

    return 0;
}