#include<iostream>
#include<string>
using namespace std;
class binary{
    string s ;
    public  :
     void read ( void);
     void chk_bin ( void);
     void ones_complimant ( void);
     void display ( void);
};
void binary ::read(void ){
    cout <<"Enter a binary number "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
if (s.at(i)!= '0'&& s.at(i)!='1') {
cout <<"Incorrect binary format"<<endl;
exit (0);
} 
  }
    
}
 void binary ::  ones_complimant (void){
    chk_bin();
for (int i = 0; i < s.length(); i++){
    if ( s.at(i)=='0' ){
        s.at(i) ='1';
    }
    else {
        s.at(i) ='0';
    }
}
}
 void binary ::  display (void){
    cout <<"Displaying your binary number"<<endl;
for (int i = 0; i < s.length(); i++){
    cout<< s.at(i);
}
cout <<endl;
}

    
int main(){
    // OOps  -  classes and objects
       

    //    class Employee {
    //     class defination 
    //    }harry , rohan , lavish;
    //
    //Nesting of member functions

binary b ;

b.read();
// b.chk_bin();
b.ones_complimant();
b.display();
     return 0;
}