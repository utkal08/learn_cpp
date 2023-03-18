#include<iostream>
using namespace std;

// Call by reference using pointers 
   void  swap (int *a, int *b ) {
    int temp = *a; 
    *a = *b ;
    *b= temp;
   }

// Call by reference using   c++ reference Variables 
   void  swapReferenceVar (int &a, int &b ) {
    int temp = a; 
    a = b ;
    b= temp;
   }
int main(){
    int x = 3 ,y=5;
    cout << "The value of  a and b before swap is "<<x <<"  and "<<y <<endl;
    // swap(x,y);// This will swap a and b 
    //swapPointers(&x,&y); This will swap a and b using pointer reference 
    swapReferenceVar(x,  y); //This will swap a and b using reference variables  
   cout << "The value of a and b after swap is a  "<<x <<"  and "<<y <<endl; 
    return 0;
}