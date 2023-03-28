#include <iostream>
using namespace std;

int atopowerb(int a,int b){
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    int ans = atopowerb(a,b/2);

    if(b%2 == 0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
}

int main() {
    int a ,b;

    cout<<"Enter the Number"<<endl;
    cin>>a>>b;

    int ans = atopowerb(a,b);

    cout<<ans;
}