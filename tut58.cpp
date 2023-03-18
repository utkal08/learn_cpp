#include<iostream>
#include<cstring>
using namespace std;

    class CWH{
        protected:
        string title;
        float rating;
        public:
        CWH(string s , float r){
             title  = s;
              rating = r;

        }
        virtual void display()=0;// do nothing function--> pure virtual functions
        
    };
    class CWHVideo : public CWH{
        int VideoLength;
        public:
     CWHVideo(string s , float r ,int vl): CWH(s,r){
        VideoLength = vl;


    }
    void display(){
         cout <<"This is an amazing video with title "<<title<<endl;
         cout <<"Ratings: "<<rating<<" out of 5 stars"<<endl;
         cout <<"Length of this video is: "<<VideoLength<<" minutes"<<endl;
    }
    };
     class CWHText :public CWH
     {
        int words ;
         public:
          CWHText ( string s ,float r , int wc):CWH (s,r)
          {
            words = wc;
          }

          void display(){
         cout <<"This is an amazing text tutorial with title "<<title<<endl;
         cout <<"Ratings of this text tutorial "<<rating<<" out of 5 stars"<<endl;
         cout <<"No of words in this text tutorial  is: "<<words<<" words"<<endl;
    }
     };
int main(){
string title;
 float rating ,vlen;
  int words;
   //for Code with Harry Video
   title = "Django tutorial";
    vlen = 4.34;
    rating = 4.99;
     CWHVideo djVideo (title,rating,vlen);
    //  djVideo.display();

    // for code with Harry Text 
     title = " Django tutorial Text";
      words = 433;
       rating = 4.24;
        CWHText djText ( title , rating , words);
        djText.display();
         CWH*tuts[2];
          tuts[0]=&djVideo;
          tuts[1]=&djText;
          tuts[0]->display();
          tuts[1]->display();
      return 0;
}
/*
Rules for virtual functions 
1. They cannot be static
2 . They are accessed by object pointers 
3. Virtual functions can be a friends of another class 
4. A Virtual function in base class might not be used.
 5. If a virtual functions is defined in a base class, there is no necessity of redefining it in 
  the derived class 
*/