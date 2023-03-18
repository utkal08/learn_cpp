#include<iostream>
#include<math.h>
using namespace std;

    /*
    Create 2 classes:
     1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +
     ,-,*, / and displays the results using another function.
     2. scientifcalculator - Takes input of 2 numbers using a utility functions and 
     performs any four scientific operation of your choice and displays the results
     using another functions.

     Create another class HybridCalculator and inherited it using these 
     2 classes:
     Q1. What type of inheritance are you using?
     Q2. which mode of inheritance are you using?
     Q3 . Create an objects of HybridCalculator and display results of simple and 
     scientific calculator.
     Q4. How is code reuseability implemented?


      */

     class SimpleCalculator{
        protected:
         int num1;
         int num2;

        public:

        void setdata1(int a,int b){
            num1 = a  ;
            num2 = b ;
        }
        
        void displays (){
             cout << "The sum of the two numbers are "<<num1 +num2<<endl;
             cout << "The subtraction of the two numbers are "<<num1 -num2<<endl;
             cout << "The multiplication of the two numbers are "<<num1 *num2<<endl;
             cout << "The divide of the two numbers are "<< num1 /num2<<endl;
        }
        
     };
     class scientificCalculator {
        protected:
         int num1;
         int num2;

        public:

        void setdata1(int a,int b){
            num1 = a  ;
            num2 = b ;
        }
        
        void display (){
             cout << "The square  of the first number is "<<pow(num1,2)<<endl;
             cout << "The square root of the second  numbers is "<<sqrt(num2)<<endl;
             cout << "The log of the first number is "<<log(num1) <<endl;
             cout << "The log of the second number is "<< log(num2)<<endl;
        }
        
     };

int main(){
    SimpleCalculator utkal;
     utkal.setdata1(2,4);
     utkal.displays();
     scientificCalculator hardik;
     hardik.display();
    return 0;
}