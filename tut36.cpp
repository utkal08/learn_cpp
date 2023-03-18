#include<iostream>
using namespace std;
    // Base class 
    class Employee {
        
         
         public : 
         int id ;
         float salary ;
            Employee ( int inpId ){
             id  = inpId ;
              salary = 34.0;
          }
Employee(){};
    };

    // Derived class  syntex
    /*
    class {{derived  - class-name }}  : {{visibility-mode}} {{base-class-name}}
    {
         class members //methods/etc...
    }
     Note :
      1. Default visibility mode is private 
      2. public visibility mode : Public members of the base class becomes 
      public  members of the dereived class 
      3. private  visibility mode : Public members of the base class becomes 
      private members of the dereived class 
      4. Private members are never inherited 
    */

    // Creating a programmer class derived from Employee Base class 
    class Programmer  : public  Employee{
        public :
        Programmer (int inpId){
              id = inpId;
        }

       int  languageCode = 9;
       void getData (){
         cout << id << endl;
       }
    };
int main(){
    Employee harry (1) , rohan (2);
     cout << harry.salary<<endl ;
     cout << rohan.salary<<endl ;
     Programmer skillf(10);
    cout << skillf.languageCode<<endl;
    cout << skillf.id<<endl;
    skillf.getData();
    return 0;
}