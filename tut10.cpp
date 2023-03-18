#include<iostream>

using namespace std;

int main( ){
/* *Loops in C++ :
There are three types of loops in C++:
1. for loop 
2. while loop
3.do while */
//for loop
// 
for (int i = 0; i < 10; i++)
{
    int table = 6*(i+1);
    cout <<"6 x "<<i+1<<" = "<<table <<endl;
    
}

    return 0;

}