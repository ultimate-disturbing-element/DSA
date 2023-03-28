#include <iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    if(n == 0){
        return -1;
    }
    
    if(arr[n-1] == key){
        return n-1;
    }

    linearSearch(arr,n-1,key);

}

int main(){
    int arr[] = {1,2,8,4,5,96,3,10};
    int n = 8;
    int k = 67;

    int ans = linearSearch(arr,n,k);

    cout<<ans;
}