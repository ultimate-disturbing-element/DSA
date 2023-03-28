#include <iostream>
using namespace std;

int binarySearch(int*arr ,int s,int e,int k){

    if(s>e){
        return 0;
    }
    int mid = s+(e-s)/2;
    
    if(arr[mid] == k){
        return mid;
    }
    if(arr[mid]>k){
        binarySearch(arr,s,mid-1,k );
    }
    else{
        binarySearch(arr,mid+1,e,k);
    }
}

int main(){
    int arr[] = {2,3,6,7,13,67,78,89};
    int n = 8;
    int s = 0;
    int e = n-1;
    int k;
    cout<<"Enter the number to be search"<<endl;
    cin>>k;

    int ans = binarySearch(arr,s,e,k);

    cout<<ans;
}