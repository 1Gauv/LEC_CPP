#include<iostream>
using namespace std;
// for every cout into cin control d long press

void display()

{
    int static i=1;
    i=i+5;
    cout<<"i= "<<i<<endl;


}
int main ()
{
    display();
    display();
    return 0;
}