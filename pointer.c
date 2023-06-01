#include <iostream>

using namespace std;

int main()
{
    int*pc,c;
    c=22;
    printf("address of c:%p\n",&c);
    printf("value of c: %d\n",c);

    pc=&c;
    printf("address of pointer pc : &pc\n",pc);
    printf ("content of pointer pc:%d\n",*pc);

    c=11;
    printf("address of pointer pc :&p\n",pc);
    printf("content of pointer pc:&d\n",*pc);

    *pc=2;
    printf("address of c:&p\n",&c);
    printf("value of c: %d\n",c);
    return 0;
}
