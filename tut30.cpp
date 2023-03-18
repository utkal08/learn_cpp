#include<iostream>
using namespace std;

    class Complex {
        int a , b;
        public :
        
        Complex (int , int  );  
        void printNumber()
  {
    cout << "Your number is " << a << "+ " << b << "i" << endl;
  }
    } ;
    Complex  :: Complex(int x ,int y )  // -- - > This is a Parameterized   constructor as it takes no parameters 
    {
        a = x;
         b = y;

    }  
int main(){
    //Implicit call 
    Complex a( 4,3) ;
     a.printNumber();
    // Explicit call 
    Complex b = Complex (5,2);
    b .printNumber();
    return 0;
}