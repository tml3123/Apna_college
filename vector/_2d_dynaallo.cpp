#include<iostream>
using namespace std;
int main(){

int rows,cols;
cout<<"enter the rows"<<endl;
cin>>rows;

cout<<"enter the cols"<<endl;
cin>>cols;

int* *matrix=new int *[rows];

for(int i=0;i<rows;i++){
    matrix[i]=new int [cols];
}

int x=1;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
    matrix[i][j]=x++;
    cout<<matrix[i][j]<<"  ";
    }
    cout<<endl;
}
cout<<matrix[1][2]<<endl;
cout<<*(*(matrix +1)+2);

}