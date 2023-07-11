#include<iostream>
using namespace std;

class g
{
private:
int a,b,c;


public:
g (int x,int y,int z)
{
    a=x;
    b=y;
    c=z;

}
  void operator -()
  {
    a=-a;
    b=-b;
    c=-c;
  }
  void display()
  {
    cout<<a;
    cout<<b;
    cout<<c;
  }



};

int main()
{ 
    g A1(10,20,30);
    -A1;
    A1.display();

return 0;
}