#include <iostream>
using namespace std;
class student
{
    char name[30];
    public:
    void getdata()
    {
        cout<<"enter a name";
        cin>>name;
    }
    void displaydata()
    {
        cout<<"the name is"<<name<<endl;
    }
};
  int main()
  { 
    student obj[36];
    int i=0,no_of_student;
    cin>>no_of_student;
    for(i=0;i<no_of_student;i++)
    {
    obj[i].getdata();
    }

    for(i=0;i<no_of_student;i++)
    {
    cout<<"Value of Object is: "<<obj[i].displaydata();
    }

    return 0;
  }