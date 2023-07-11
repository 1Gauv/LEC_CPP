#include<iostream>
using namespace std;
class employee{
    private:
        char name[25];
        float salary;
    public:
    void getdata()
    {
        cout<<"enter name";
        cin>>name;
        cout<<"enter salary";
        cin>>salary;

    }
    void showdata()
    {
        cout<<"name"<<name <<endl;
        cout<<"salary"<<salary<<endl;

    }
};
int main()
{
    employee *eptr ;
    employee e;
    eptr =&e;
    eptr ->getdata();
    cout<<"pointer variable";
    eptr ->showdata();
    return 0;
}