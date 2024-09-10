#include<iostream>
using namespace std;

int watertrap(int *height,int n){

int leftmax[20000];
leftmax[0]=height[0];//for sevety of infinity INT_MIN
int rightmax[20000];
rightmax[n-1]=height[n-1];

cout<<"leftinfinity"<<leftmax[0]<<endl;
cout<<"rightinfinity"<<rightmax[n-1]<<endl;

for(int i=1;i<n;i++){
    leftmax[i]=max(leftmax[i-1],height[i-1]);
    cout<<"left max"<<leftmax[i]<<",";
}

cout<<endl;


for(int i=n-2;i>=0;i--){
    rightmax[i]=max(rightmax[i+1],height[i+1]);
    cout<<"rightmax"<<rightmax[i]<<",";
}
int watertraped=0;  
for(int i=0;i<n-1;i++){
int currwater=min(leftmax[i],rightmax[i])-height[i];
if(currwater>0){
     watertraped+=currwater;
}

}
cout<<"\nwatertrapped::):-"<< watertraped<<endl;
 
 return watertraped;

}


int main(){

int height[7]={3,6,2,3,9,5,6};
int n=sizeof(height)/sizeof(int);

watertrap(height,n);
    return 0;
}