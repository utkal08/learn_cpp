#include<iostream>
using namespace std;

    class student {
         protected:
          int  roll_no;
           public:
           void set_number (int a ){
             roll_no = a;

           }
           void print_number(void) {
            cout << " Your roll no is "<< roll_no<<endl;
           }
    };
    class Test: virtual public student {
         protected :
          float maths, physics;
           public :
            void set_marks (float m1 , float m2){
                maths = m1;
                physics = m2;
            }
            void print_marks( void){
                cout << " You result is here :" <<endl
                << " Maths :"<<maths<<endl
                << "Physics:"<<physics<<endl;
            }

    };
    class sports : virtual public student {
        protected :
        float score ;
        public :
        void set_score(float sc){
            score = sc ;
                   }
                   void print_score (void ){
                     cout <<"Your PT score is "<<score <<endl;

                   }
    };
    class Result : public Test , public sports{
        private:
         float total;
          public :
          void display(void){
             total = maths + physics + score;
             print_number();
             print_marks();
             print_score();
             cout << " Your total score is :"<<total<<endl;

          }
        
    }; 
int main(){
    Result harry;
     harry.set_marks(78.8,99.5);
     harry.set_number(4200);
     harry.set_score(9);
     harry.display();
    return 0;
}