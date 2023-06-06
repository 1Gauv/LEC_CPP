#include<iostream>
using namespace std;
class a{
    public:
     int data;
   void getdata(){
        cout<<"enter the value of data";
        cin>>data;
    }
    void showdata(){
        cout<<"the data is"<<data;
    }
};
class b{
    public:
    a a1;
    int b;
    void getdata(){
    cout<<"the value of b is";
    cin>>b;
    a1.getdata();
    }
    void showdata(){
        a1.showdata();
        cout<<"\nb is "<<b;
         }
};
int main(){
    b b1;
    b1.getdata();
    b1.showdata();
    return 0;
}