#include <iostream>
using namespace std;

int a,b;
int temp;
    

    int getdata()
  {

    cout<<"enter any number";
    cin>>a;
    return a;
  }
  void swap(int a, int b)
  {
    temp=a ;
    a=b;
    b=temp;
    cout<<"The numbers after swapping are "<<a<<" , "<<b;
  }

   int main()
   {
     int c,d;
    c= getdata();
    d= getdata();
    swap(c,d);

    return 0;

   }