#include <iostream>

using namespace std;

int main()

{
  int length;
  int breadth;
  float area;
  cout<< "enter length"<< length <<endl;
  cout<< ".enter breadth" << breadth << endl;
  cin>> length;
  cin>> breadth;
  area = length*breadth;
  cout<< "area is"<<area;
  return 0;
}