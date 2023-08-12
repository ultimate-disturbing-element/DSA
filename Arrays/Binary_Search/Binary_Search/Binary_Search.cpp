#include <iostream>
using namespace std;

int binarySearch(int arr[],int mid,int s,int e, int key){

while(s <= e){
    if(arr[mid] == key){
        return mid;
    }

    else if(arr[mid] > key){
        e = mid - 1;
    }

    else {
        s = mid+1;
    }

    mid = s + (e-s)/2;
    }
    return 0;
}

int main(){
    int arr[] = {2,3,4,5,6,7,9,10,14,56,76,98};
    int n = sizeof(arr)/sizeof(int);
    int key = 9;

    int s = 0;
    int e = n - 1;

    int mid = s + (e-s)/2;

    int ans = binarySearch(arr,mid,s,e,key);

    cout<<ans;
}