#include<iostream>
using namespace std;

int sayDigit(int n,string* arr){

if(n == 0){
    return 0;
}
    int digit = n%10;
    n = n/10;


    sayDigit(n,arr);

    cout << arr[digit-1]<<" ";

}

int main(){
    int n;
    string arr[] = {"one","two","three","four","five","six","seven","eight","nine"};
    cout<<"Enter Digit"<<endl;
    cin>>n;

   sayDigit(n,arr);

}