#include<iostream>
using namespace std;

int main(){
// for (int  i = 0; i < 4; i++)
// {
    
//     cout<<i<<endl;
//     if ( i == 2 ){
//         break;
//     }
// }
for (int  i = 0; i < 4; i++)
{
    
    if ( i == 2 ){
        continue;
    }
    cout <<i<<endl;
}

return 0;
}