#include <iostream>
using namespace std;

class mobile
{
    int x=10;
    public:
    void getnum()
    {
        cout<<"the value of m is"<<x<<endl;
        cout<<"the value of this-> m is"<<x<<endl;
        cout<<"address of object is"<< this;
        
    }


    
    
    
};
int main()
{
    mobile m1,m2  ;
    m1.getnum();
    
    m2.getnum();
    return 0;
}
