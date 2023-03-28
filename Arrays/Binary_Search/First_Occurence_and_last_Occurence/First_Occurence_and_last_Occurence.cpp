#include <iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastOccurence(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[] = {1,2,2,2,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    int key = 2;

    int first = firstOccurence(arr,n,key);

    int last = lastOccurence(arr,n,key);

    cout<<"First Occurence "<<first<<endl;

    cout<<"Last Occurence "<<last<<endl;
}