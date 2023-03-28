#include <iostream>
using namespace std;

int squareRootWMP(int n){
    int s = 0;
    int e = n;
    long long int mid = s+(e-s)/2;

    long long int ans; 

    while(s<=e){
        long long int square = mid * mid;

        if(square == n){
            return mid;
        }

        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;

}

double morePrecious(int n ,int precision,int tempans){
    double factor = 1;
    double ans = tempans;
    for(int i = 0 ;i<precision;i++){
        factor = factor/10;
        for(int j = ans;j*j < n;j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter Number"<<endl;
    cin >> n;

    int tempans = squareRootWMP(n);

    double ans = morePrecious(n,3,tempans);

    cout<<ans;
}