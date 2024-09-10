// Question 3: Build a Simple Interest Calculator.
// Input:principal(P),rate(R),time(T) 
//  Output:(P*R*T)/100

#include<iostream>
using namespace std;
int main(){
    
    int P,R,T;

    float result;
    P=10;
    R=5;
    T=8;

    result=((P*R*T)/100);

cout<<"result ="<<result;

    return 0;
}