#include<iostream>
using namespace std;

    class Complex {
        int a , b;
        public :
        //Creating a Constructor 
        // Constructor is a special member function with same as of the class . It is automatically invoked
        // whenever an object is created 
        // It is used to initialize the objects of its class 
        Complex (void ); //constructor declaration 
        void printNumber()
  {
    cout << "Your number is " << a << "+ " << b << "i" << endl;
  }
    } ;  
    Complex  :: Complex(void)
    {
        a = 10;
         b = 2;

    }
int main(){
    Complex c ;
    c.printNumber ();
    return 0;
}