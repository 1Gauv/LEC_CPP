#include <iostream>
using  namespace std;
class complex
{
private :
    float real;
    float imaginary;
private :
    void readvalue()
    {
        cout<<"enter real part";
        cin>>real;
        cout<<"enter imaginary part";
        cin>>imaginary;
    }
    void showvalue ()
    {
        cout<<real;
        cout<<imaginary;
    }
    void add (complex c1, complex c2)
    {
        real=c1.real+c2.real;
        imaginary=c1.imaginary+c2.imaginary;
        }
        };
        int main()
        {
            complex c1,c2,c3;
            cout<<"enter first complex num"<<endl;
            c1.realvalue();
            cout<<"enter second num"<<endl;
            c2.readvalue();
            c1.showvalue();
            cout<<"+";
            c2.showvalue();
            c3.add(c1,c2);
            cout<<"+";
            c3.showvalue();
            return 0;
        }


