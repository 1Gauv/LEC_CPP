#include <iostream>
using namespace std;
int main()
{
    int emp[4];

    emp[0] =2000;
    emp[1] =3000;
    emp[2] =4000;
    emp[3] =5000;
     for (int i=0;i<4;i++){
        cout<<"enter a number"<<i<<endl;
        cin>>emp[i];6
    
     }

     for(int i=0;i<4;i++)
      {
        if (i==2)
        {
            continue;
        }
        cout<<emp[i]<<endl;
      }
      return 0;
}
