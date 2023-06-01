#include <iostream>
using namespace std;
int main()
{
    int roll no;
    cout<<"enter a symbol no"<<roll no<< endl;
    cin>>roll no;
    if (roll no == 32)
    {
        cout<<"pass";
    }
     else if (roll no == 10){
        cout<<"fail";
     }
     else if (roll no ==36)
     {
        cout<<"topper";
     }
     else {
        cout<<"result not found";
     }
     
     return 0;
    
}