#include<iostream>
using namespace std
;
int main(){
    //Array Example
    int marks [4]= { 23,34,24,45};
    int mathmarks [4]= { 78,87,24,45};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;

    // //You can change the value or an array
    // marks[2] = 344;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<endl;
    // cout<<" These are math marks "<<endl;
    // cout<<endl;

    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;
    // for (int  i = 0; i < 4; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }

int i=  0;
// Quick quiz : do the same using While and do-while loops


// using while loop
// while (  i<4) {
//     cout << marks[i]<<endl; 
//     i++;
// }   
// using do-while loop
// do {
//     cout<<marks[i]<<endl;
//     i++;
//     }
//     while (i<4);


// Pointers and arrays 

int *p = marks ;
cout <<* (p++);
cout <<* (++p);
//  cout << " The value of marks [0] is "<<*p<<endl;
//  cout << " The value of marks [1] is "<<*(p+1)<<endl;
//  cout << " The value of marks [2] is "<<*(p+2)<<endl;
//  cout << " The value of marks [3] is "<<*(p+3)<<endl;
    return 0;
}