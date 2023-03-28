#include <iostream>
using namespace std;


// First Approach;
int reverseArray(int* arr,int n){

    for(int i = n-1 ;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Second Approach;
int reverArrayRecursion(int* arr,int n){
    if(n == 1){
        cout<<arr[0];
        return 0;
    }
    cout<<arr[n-1]<<" ";
    reverArrayRecursion(arr,n-1);
}

// Third Approach Manipulate Array
int reverseArraySwap(int arr[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout <<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr,n);
    reverArrayRecursion(arr,n);
    reverseArraySwap(arr,n);
}