#include <iostream>
using namespace std;

int print(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        cout<<arr[i];
    }
}

bool isSorted(int arr[],int n){
    print(arr,n);
    cout<<endl;
    if(n == 0 || n == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }

    isSorted(arr+1,n-1);
}

int main() {
    int arr[] = {2,3,4,5,6,7,8,9};
    int n = 8;

    bool ans = isSorted(arr,n);

    if(ans){
        cout<<"Is Sorted";
    }
    else{
        cout<<"Not Sorted";
    }
}