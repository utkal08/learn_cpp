#include<iostream>
#include<cmath>
using namespace std;

    class Point {
        int x, y  ;
        friend void distance (Point, Point) ;
         public :
           Point    (int a , int b ){
            x = a; 
            y = b ;
            }
            
    };
    
    
        
          void distance(Point p1,Point p2){
            int x_diff = (p2.x -p1.x);
            int y_diff = (p2.y -p1.y);
            int distance = sqrt(pow(x_diff,2)+pow(y_diff,2));
            cout << " the distance between "<<"x"<< "and "<< "y "<<"is "<<distance <<endl  ;
          }
          
    
int main(){
    Point   a(14,2);
    Point   b(2,2);
    distance (a,b);


    return 0;
}