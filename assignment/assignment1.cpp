
#include<iostream>
using namespace std;
class complex
{
    public:
     int a,b;
     complex (int,int);
      void parameter ()
      {
        cout<<"the complex num is"<<a<<"+"<<b<<"i"<<endl;
      }
};
 complex ::complex(int x,int y)
 {
    a=x;
    b=y;
 }
 int main()
 {
    complex a(4,6);
    complex b(7,8);
    a.parameter();
    b.parameter();

    return 0;

 }
