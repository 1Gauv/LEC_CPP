#include <iostream>
using namespace std;
class swap_val{

    private:
    int a,b;
    int temp=0;
    
    public:
    void getdata()
  {
    cout<<"enter two numbers";
    cin>>a>>b;
  }
  void swaap()
  {
    temp=a ;
    a=b;
    b=temp;
  }
  void showdata()
  {
    cout<<"a: "<<a<<endl<<"b: "<<b;

  }
};
   int main()
   {
     swap_val s1;
    s1.getdata();
    s1.swaap();
    s1.showdata();
    return 0;
   }