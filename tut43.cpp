#include<iostream>
using namespace std;

    class Base1{
        public:
        void great(){
            cout <<"How are you ?"<<endl;


        }
    };
    class Base2{
        public :
        void great()
        {
            cout <<"kaise ho ? "<<endl;
        }
    };
    class Derived : public Base1, public Base2{
        int a ;
        public:
        void great (){
            Base1 :: great();
        }
    };

int main(){
    Base1 base1obj;
    Base2 base2obj;
    base1obj.great();
    base2obj.great();
    Derived d;
    d.great();
    
    return 0;
}