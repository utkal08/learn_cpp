#include <iostream>
#include <iomanip>
using namespace std;
 

 int main (){
    // int a = 34; 
    // cout << " The value of a was : "<<a <<endl;
    // a= 45;
    // a= 45;
    // cout << " The value of a was : "<<a<<endl ;
    // constant in c++ 
    // const int a = 3;
    // cout << " The value of a was : "<<a <<endl;
    //  int a= 45;// You will get an error because a is a constant 
    // cout << " The value of a was : "<<a<<endl ;
    int a = 2 ,b = 23, c = 2444;
    cout << "The value of a is  without setw "<< a << endl ;
     cout <<" the value of b is without setw "<< b <<endl;
    cout <<  " The value of c is without setw"<<c <<endl;

    cout << "The value of a is "<<setw(4)<< a << endl ;
     cout <<" the value of b is "<<setw(4)<< b <<endl;
    cout <<  " The value of c is "<<setw(4)<<c <<endl;
    return 0;

 }