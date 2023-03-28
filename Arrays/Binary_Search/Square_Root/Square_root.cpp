#include <iostream>
using namespace std;

int squareRoot(int n){
    int s = 1;
    int e = n;

   long long int mid = s+(e-s)/2;
   long long int ans;
    while(s<=e){
        long long int square = mid * mid;
        if(square == n){
            return mid;
        }
        else if(square > n){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }

    return ans;
}

int main() {
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

    int ans = squareRoot(n);
    cout << ans;
}