#include<iostream>
using namespace std;

    class Number {
        int a ; 
        public :
        Number (){
            a = 0;
        }
        Number (int num ) {
            a = num ; 

        }
        Number (Number &obj) {
            cout << " Copy constructor called "<<endl;
            a = obj .a; 

        }
    void display (){
         cout << " The number for this objects is "<<a<<endl;
    }
    };
int main(){
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();
    Number z1 (x);
    z1.display();
    // z1  should exactly resemble z or x or y 
    return 0;
}