// #include<iostream>
// using namespace std;

//     int factorial (int n){
//          if ( n ==0 || n == 1){
//             return 1;
//          }
//          else {
//             return    n*factorial(n-1);
//          }
//     }
// int main(){
//     //factorial of a number :
//     int a ;
// cout << " Enter the number of which you want factorial of "<<endl;
// cin >>a ;
// cout << " The factorial of  " <<a<<" is " << factorial (a)<<endl;
//     return 0;
// }


// 2. fibonacci series 
#include<iostream>
using namespace std;

    int fibonacci (int n){
         if ( n <2){
            return 1;
         }
         else {
            return   fibonacci(n-2)+fibonacci(n-1);
         }
    }
int main(){
    //factorial of a number :
    int a ;
cout << " Enter any  number :\n "<<endl;
cin >>a ;
cout << " The fibonacci series upto given number is  " <<a<<" is " << fibonacci (a)<<endl;
    return 0;
}