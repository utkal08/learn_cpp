#include<iostream>
using namespace std;
/* 
 Case1:
  class B : public A ){
    // Order of execution of constructor -> first A ()then B ()
  };
   Case 2:
   class A : public B , public C {
     //Order of execution of consturctor -> B ()then C () and A ()
   };
   Case 3:
    class A : public B , public C {
         // order of execution of consturctor ->C()then B ()
and  A ()   };

*/
    class Base1 {
         int data1;
          public :
           Base1(int i  ){
             data1 = i ;
              cout<< " Base class constructor called "<<endl;
               
           }
           void printDataBase1 (void )
           {
            cout << " The value of data is "<<data1<<endl;
           }
    } ;
    class Base2 {
         int data2;
          public :
           Base2(int i  ){
             data2 = i ;
              cout<< " Base class constructor called "<<endl;
               
           }
           void printDataBase2 (void )
           {
            cout << " The value of data is "<<data2<<endl;
           }
    } ;
    class Derived : public Base1, public Base2{
         int derived1, derived2;
         public :
        Derived (int a , int b  , int c ,int d): Base1(a), Base2(b){
             derived1 = c;
             derived2 = d;
             cout<<" Derived class consturctor called "<<endl;
              
        }
         void printData (void){
             cout << " The value of  derived1 is"<<derived1<<endl; 
             cout << " The value of  derived2 is"<<derived2<<endl; 
             
         }
          
    };

int main(){
    Derived harry ( 1,2,3,4);
    harry.printDataBase1();
    return 0;
}