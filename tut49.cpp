#include<iostream>
using namespace std;

    /*
    Syntex for intialization list in constructor:
     constructor (argument-list) : intilization - section 
     {
         assignment + other code ;

     }
*/
     class Test {
         int a;
          int b;
           public:
           Test (int i , int j ):a (i), b(j){
            cout<< "constructor -executed";
            cout<< " Value of a is "<<a ;
            cout<< " Value of b is "<<b;
            }
     };

    
int main(){
    Test t ( 4,7);
    return 0;
}