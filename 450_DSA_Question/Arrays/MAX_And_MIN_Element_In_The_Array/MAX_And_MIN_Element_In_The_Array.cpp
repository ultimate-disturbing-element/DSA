#include <iostream>
using namespace std;

// 1 Approach
int maxElement(int arr[],int n,int max){
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int minElement(int arr[],int n,int min){
    for(int i = 0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

//  2 Approach
void minMaxElement(int arr[],int n,int min,int max){

    for(int i = 0;i<n;i++){
        if(arr[i]>min){
            min = arr[i];
        }

        if(arr[i]<max){
            max = arr[i];
        }
    }
cout<<"Maximum is : "<<min<<endl;
cout<<"Minimum is : "<<max<<endl;

}

int main(){

int n ;
int arr[10000];
cout<<"Enter the number of Elements You want to insert"<<endl;
cin>>n;


for(int i = 0;i<n;i++){
    cin>>arr[i];
}

int mn = INT_MIN;
int mx = INT_MAX;

int max = maxElement(arr,n,mn);
int min = minElement(arr,n,mx);

minMaxElement(arr,n,mn,mx);

cout<<"Maximum is : "<<max<<endl;
cout<<"Minimum is : "<<min<<endl;

}