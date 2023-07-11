#include<iostream>
using namespace std;
class vehicle
{
    private:
     int platenumber;
      public:
        int getnumber()
        {
    
            cout<<"enter a num:";
            cin>>platenumber;
            return platenumber;
        }
};
  int main()
  {
    vehicle a;
int x=a.getnumber();

    cout<<"the num is:"<<x;
    

  }




                    

     
     
