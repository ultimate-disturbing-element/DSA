#include <iostream>
using namespace std;

int getPivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[0] <= arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int main() {
    int arr[] = {7,9,1,2,3};
    int n = sizeof(arr)/sizeof(int);

    int ans = getPivot(arr,n);

    cout << ans;

}