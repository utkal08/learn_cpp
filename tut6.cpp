
// There are two types of header files:
// 1. System header files : It comes with the compiler
#include <iostream>
// 2. User defined heade files : It is written by the programmer 
// #include "this .h"  --> This will produce an error if this .h is no 
// present in the current directory
using namespace std ;
int main()
{
    int a = 23, b = 34;
  cout << "OPerators in c++ :  "<< endl;
  cout << "Following are the  types of operators in c++:  "<< endl;
// Arithmatic operators 
 cout << " The value of a+ b is "<< a+b<<endl;
 cout << " The value of a- b is "<< a-b<<endl;
 cout << " The value of a* b is "<< a*b<<endl;
 cout << " The value of a/b is"<< a/b<<endl;
 cout << " The value of a++  is "<< a++<<endl;
 cout << " The value of a--  is "<< a--<<endl;
 cout << " The value of ++a is "<< ++a<<endl;
 cout << " The value of --a is "<< --a<<endl;
 cout<< endl ;
 // Assignment operators --> used to assign values to variables 
 // int a = 3 , b = 4 ;
  // char d = ' 4 ' ;
  // 
  // Comparison  operators 
cout << " The value of a == b is "<< (a==b) <<endl;
cout << " The value of a != b is "<< (a!=b) <<endl;
cout << " The value of a > b is "<< (a > b) <<endl;
cout << " The value of a < b is "<< (a < b )<<endl;
cout << " The value of a >= b is "<< (a>=b)<<endl;
    return 0;
}
