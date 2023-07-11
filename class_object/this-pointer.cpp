#include <iostream>
using namespace std;

class A
{
    int x;
    public:
    void getnum(int x)
    {
        this->x=x;
    }

   void showdata()
        {
            cout<<"the value is"<<x;

        }
    
    
    
};
int main()
{
    A obj1 , obj2;
    obj1.getnum(10);
    obj1.showdata();
    obj2.getnum(5);
    obj2.showdata();
    return 0;
}
