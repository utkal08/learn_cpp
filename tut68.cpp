#include<iostream>
using namespace std;

 template<class T >
    class Harry {
         public:
          T data;
           Harry (T a){
             data = a;

           }
           void display();

           
    };
     template <class T> 

     void Harry <T> :: display (){
             cout << data;

           } 
void func( int a){
  cout<< " I am first func()"<<a<<endl;

}
template <class T>
void func(T a){
   cout <<  " I am templatised func()"<<a<<endl;

}
template <class T>
void func1(T a){
   cout <<  " I am templatised func()"<<a<<endl;

}

int main(){
  //  harry <float> h(3.4);
  //  harry<char>h ('c');

    // Harry <int> h(54);
    //  cout <<h.data<<endl;
    //   h.display();
//  func(4 ); // Exactly match takes the highest priority
 func1(4);// Exactly match takes the highest priority 
    return 0;
}