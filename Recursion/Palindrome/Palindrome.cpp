#include <iostream>
using namespace std;

bool palindrome(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return palindrome(str,i+1,j-1);
    }
}

int main() {
    string str;
    cout<<"Enter String"<<endl;
    cin>>str;
    int i = 0;
    int j = str.length()-1;
    bool ans = palindrome(str,i,j);
    if(ans){
        cout<<"Is Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}