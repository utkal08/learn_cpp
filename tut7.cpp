#include <iostream>
using namespace std;
int c = 34 ;

int main()
{
    //********Build in data types **********


    // int num1 ,num2;
    // cout << "Enter the value of num1 : \n " ;
    // cin >>num1;
    // cout << "Enter the value of num2 : \n " ;
    // cin >>num2;
    // c = num1+num2;
    // cout << " The sum is "<< c<< endl;
    // cout << " The global c is "<<::c;

    //********float , double and long double Literals  **********
    // float d = 53.45;
    // long double e = 43.5;
    // cout << "The value of d is "<<d<<endl<<"the value of e is "<<e;
    // cout << " The size of 34.4 is "<< sizeof(34.4)<<endl; 
    // cout << " The size of 34.4f is "<< sizeof(34.4f)<<endl; 
    // cout << " The size of 34.4 Fis "<< sizeof(34.4F)<<endl; 
    // cout << " The size of 34.4lis "<< sizeof(34.4l)<<endl; 

    //********Reference Variables **********
    // Rohan Das ----> Monty -----> Rohu-----. Dangerous coder 
    // float x = 2334;
    // float &y = x ;
    // cout <<x<<endl;
    // cout <<y<<endl;

 //********Typecasting  **********
 int a = 45 ;
 float b = 45.53;
  cout << " The value of a is "<< ( float )a<<endl;
  cout << " The value of a is "<< float (a)<<endl;
  cout << " The value of b is "<< ( int  )b<<endl;
  cout << " The value of b is "<<  int  (b)<<endl;
  int c = int (b);
  cout <<"The expression is "<<a+b<<endl;
  cout <<"The expression is "<<a+int (b)<<endl;
  cout <<"The expression is "<<a+(int)b<<endl;
     return 0;
}

  