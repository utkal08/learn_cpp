#include<iostream>

using namespace std ;


int main (){
    int age ;
        cout <<"Tell me your age ";
        cout<<endl;
cin >> age;
// 
switch (age)
{
case 18:
cout << " You are 18"<<endl;
case 21:
cout << " You are 21"<<endl;
case 23:
cout << " You are 23"<<endl;

    break;

default:
cout << " No special cases ";
    break;
}
    return 0;
}