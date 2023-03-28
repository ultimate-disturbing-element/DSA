#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    if(n==0){
        cout<<1;
        return 0;
    }
    int ans = 0;
    int i = 0;
    while(n!=0){     
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    int temp = 0;
   int j =0;
   while(ans!=0){
       int bit = ans%10;
       if(bit==1){
          bit = 0;
       }else{
              bit = 1;
       }
      temp = (bit * pow(2,j)) + temp;
       ans = ans/10;
       j++;
   }

   cout<<temp;
}