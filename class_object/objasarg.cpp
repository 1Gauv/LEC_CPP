#include<iostream>
using namespace std;
class student{
    public:
    float marks;
    float avg; 
    void first(){
        cout<<"enter a marks";
        cin>>marks;
    }
    void average(student s1,student s2){
       float avgrage=(s1.marks+s2.marks)/2;
        cout<<"avg="<<avgrage;

    }
};
 int main()
 {
   student s1,s2,s3;
    s1.first();
    s2.first();
    s3.average(s1,s2);
    return 0;
 }
  