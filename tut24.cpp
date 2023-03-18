#include<iostream>
using namespace std;

    class Employee {
        int id ; 
        
        public :
        int static count ;
        void setData(void){
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++;
        }
        void getData( void){
            cout<< "The id of this employee is "<< id<<" and this is employee number "<<count<<endl ;
        }
            };
 int Employee :: count ;// Defualt value is 0
int main(){
    Employee harry,rohan ,levish;
    harry.setData();
    harry.getData();
    rohan.setData();
    rohan.getData();
    levish.setData();
    levish.getData();

    return 0;
}