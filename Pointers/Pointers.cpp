#include <iostream>
using namespace std;
// * -> derefrence operator . (value at address pointed by pointer)
// & -> address of operator (address of variable)
int main(){
    int a = 5;
    int *ptr = &a;

    int *ptr3 = ptr; 

    int** ptr2 = &ptr;

    cout <<"Pointer "<< ptr <<endl;

    cout<<"PTR3 "<<ptr3 << endl;

    cout << "Address of Ptr " << &ptr <<endl;

    cout<< "Value " << *ptr <<endl;

    cout<<"Address of A "<< &a <<endl;

    cout<< " ptr2 "<<ptr2<<endl;

    cout<< "Value of ptr2 "<<*ptr2 <<endl;

    cout << "ptr2 "<<**ptr2 <<endl;

    cout << "Size of a " <<sizeof(a) << endl;

    cout<< "Size of ptr "<<sizeof(ptr)<<endl;

    cout<<"Size of Ptr2 "<<sizeof(ptr2)<<endl;

    cout<<"Size of Address of a "<<sizeof(&a)<<endl;

    cout<< "Size of ptr "<<sizeof(*ptr)<<endl;

    cout<<"Size of Ptr2 "<<sizeof(**ptr2)<<endl;

    *ptr = 100;
 
    cout << a <<endl;

    int b = *ptr;
    b++;

    cout<<"b "<<b<<endl;

    cout <<"a "<<a<<endl;

    ptr++; // moved ahed by 4 bytes.

    cout << "ptr "<<ptr;

    


}


// #include <iostream> 
// using namespace std; 
// int main() { 
// int firstvalue = 5, secondvalue = 15; 
// char thirdvalue = 'a'; 
// int * p1, * p2; char * p3; 
// p1 = & firstvalue; // p1 = address of firstvalue 
// p2 = & secondvalue; // p2 = address of secondvalue 
// p3 = & thirdvalue; // p3 = address of thirdvalue 
// * p1 = 10; // value pointed to by p1 = 10 
// * p2 = * p1; // value pointed to by p2 = value pointed to by p1 
// p1 = p2; // p1 = p2 (value of pointer is copied) 
// * p1 = 20; // value pointed to by p1 = 20 
// * p3 = 'b'; // value pointed to by p3 = ‘b ’ 
// cout << "firstvalue is " << firstvalue << endl; 
// cout << "secondvalue is " << secondvalue << endl; 
// cout << "thirdvalue is " << thirdvalue << endl; 
// return 0; 
// }