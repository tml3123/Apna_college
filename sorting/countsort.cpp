#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
          cout<<arr[i];
          cout<<endl;
    }
}

void countsort(int arr[], int n)
{

    // size of frequency arr in ideal cases
    int freq[100000]={0};
   
    // for range
    int minval = INT16_MAX;
    int maxval = INT8_MIN;
    //FOR FINDING RANGE
    for (int i = 0; i < n; i++)
    {
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
    }


//1st step O(n)
    for(int i=0;i<n;i++){
        freq[arr[i]]++;

    }

    //2nd step   O(range) max-min
    for(int i=minval,j=0;i<maxval;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;

        }
    }
    print(arr,n);
}

int main()
{

    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = 8;
    countsort(arr,n);
    return 0;
}