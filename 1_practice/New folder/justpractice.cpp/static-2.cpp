#include<iostream>
using namespace std;
class student
{
    char name;
    public:
    void getdata()
    {
         int static i=1;
          i=i+5;
        cout<<"enter a name";
        cin>>name;
    }
    
        
        
    

};
 int main()
 {
    student s1;
    
    s1.getdata();
    
    return 0;

 }