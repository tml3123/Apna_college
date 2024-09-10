#include<iostream>
using namespace std;

bool stairmat(int mat[][4],int n,int m,int key){
    int i=0;
    int j=m-1;

    while(i<n&&j>=0){
        if(mat[i][j]==key){
           cout<<"found at cell ("<<i<<","<<j<<")\n";
          return true;

        }
        else if(mat[i][j]>key){
            //left
            j--;
        }else
       {
         //down
        i++;
       }
     
    }
      cout<<"key not found\n";
       return false;
}

int main(){
    int mat[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};
    stairmat(mat,4,4,33);
            

}