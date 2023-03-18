#include<iostream>
#include<list>
using namespace std;
void display (list<int> &lst){
    list<int> :: iterator it;
     for (it=lst.begin(); it != lst.end();  it++)
     {
        cout<<*it<<" ";
  }
   cout<<endl;  
}
    
int main(){
    list <int> list1;// List of 0 Length
    list1.push_back(4);
    list1.push_back(1);
    list1.push_back(13);
    list1.push_back(5);
    list1.push_back(7);
    display(list1);
    // list1.pop_back();
    // display(list1);
    // // Removing elements from the list
    // // list1.pop_front();
    // list1.remove(13);
    //  display(list1);

     // Revering the list
    list1.reverse();
     display(list1);
     
//Sorting the list
//  list1.sort();
//  display(list1);
    list <int> list2 (3);// Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
     *iter = 45;
     iter++;
      *iter= 6;
       iter++;
       *iter= 7;
        iter++;
        display(list2);
        list1.merge(list2);
        cout<<"List 1 after merging";
         display(list1);
    return 0;
}