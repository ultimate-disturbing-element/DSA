#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;

    cout <<"Pointer "<< ptr <<endl;
    cout << "Address of Ptr " << &ptr <<endl;

    cout<< "Value " << *ptr;


}