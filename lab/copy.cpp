
#include<iostream>
using namespace std;



class swap
{
int a,b;
public:
void getdata();
void swapv();
void display();
};

void swap::getdata()
{
cout<<“Enter two numbers:”;
cin>>a>>b;
}


void swap::swapv()
{
a=a+b;
b=a-b;
a=a-b;
}

void swap::display()
{
cout<<“a=”<<a<<“tb=”<<b;
}

main()
{
clrscr();
swap s;


s.getdata();
cout<<“nBefore swap:n”;
s.display();

s.swapv();
cout<<“nnAfter swap:n”;
s.display();

getch();
return 0;
}