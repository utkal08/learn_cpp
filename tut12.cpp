#include<iostream>
using namespace std
;
int main(){
    int a = 3 ;
    int* b = &a;
    // & ----> (Address of) Operator
    cout << "The address of a is "<< b<<endl;
    cout << "The address of a is "<< &a<<endl;

    // * --->  Dereference operator
    cout << "The value  of address b  is "<< *b<<endl;
    

    // Pointer to pointer 
    int **c =&b;
    cout << "The address of b is "<<c<<endl;

    return 0;
}