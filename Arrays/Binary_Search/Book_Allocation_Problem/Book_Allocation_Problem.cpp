#include <iostream>
using namespace std;

bool isPossibleSoln(int arr[],int mid,int n,int m){
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0;i<n;i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i]>mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
return true;
}

int bookAllocation(int arr[],int m,int n){
    int s = 0;
    int sum = 0;
    int ans = -1;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(isPossibleSoln(arr,mid,n,m)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid +1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

int main() {

    int arr[4] = {10,20,30,40};
    int m = 2;
    int n = sizeof(arr)/sizeof(int);

    int ans = bookAllocation(arr,m,n);

    cout << ans;

}