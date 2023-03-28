#include <iostream>
#include <string>

using namespace std;

void reverseString(string str, int i, int j) {
if (i > j) {
cout << str << endl;
return;
}
swap(str[i], str[j]);
reverseString(str, i + 1, j - 1);
}

int main() {
string str;
cout<<"Enter String"<<endl;
cin>>str;
int i = 0;
int j = str.length()-1;
reverseString(str,i,j);
return 0;
}