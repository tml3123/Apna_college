 #include<iostream>
 using namespace std;

// bool isprime(int n){

// if(n==1){
//     false;
// }
// if(n%2==0){
//     return false;
// }
// return true;
// } 

bool isprime2(int n)
{
    if(n==1){
        return false;

    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            false;
        }
        return true;
    }
}

void allprime(int n){
    for(int i=2;i<n;i++){
      
      if(isprime2(i)){
        cout<<i<<" ";
      }
    }
    cout<<endl;
}

 int main(){

//cout<<isprime2(7);
allprime(20);


    return 0;
 }