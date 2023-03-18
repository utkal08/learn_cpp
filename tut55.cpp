#include<iostream>
using namespace std;

    class BaseClass{
        public:
        int var_base;
        void display(){
            cout<<" Displaying Base class variable var_base "<<var_base<<endl;
        }
         
    } ;
    class DerivedClass : public BaseClass {
         public:
        int var_derived;
        void display(){
            cout<<" Displaying Base class variable var_base "<<var_base<<endl;
            cout<<" Displaying Base class variable var_derived "<<var_derived<<endl;
        }
    };
int main(){
    BaseClass * base_class_pointers;
     BaseClass obj_base;
     DerivedClass obj_derived;
     base_class_pointers = &obj_derived;// pointing base class pointer to derived class

     base_class_pointers -> var_base = 34;
    //  base_class_pointers -> var_derived = 34; // Will throw an error

    base_class_pointers-> var_base= 3400;
     base_class_pointers -> display();

     DerivedClass*derived_class_pointer;
     derived_class_pointer = &obj_derived;
     derived_class_pointer-> var_derived = 98;
      derived_class_pointer -> display ();
    
    return 0;
}