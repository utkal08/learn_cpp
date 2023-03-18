#include<iostream>
using namespace std;

 struct employee 
 {
int eId;
char favChar;
 float salary ;
 };
   union  money
 {
int rice;
char car;
 float pounds ;
 };
    
int main(){
    enum Meal{ breafast, lunch , dinner};
    Meal m1 = breafast;
    cout <<m1;
    // cout << breafast;
    // cout << lunch;
    // cout << dinner;


    // union money m1;
    // m1.rice= 34;
    // cout <<m1.rice;
     
    // struct employee harry;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 12000000;
    // cout <<harry.salary<<endl;
    // cout <<harry.favChar<<endl;
    // cout <<harry.eId<<endl;

    return 0;
}