#include<stdio.h>
  void main(){
    int*pc,c;
    c=5
    pc=&c
    printf("value of address of c is pointer %p",pc);
    printf("value of address of c is pointer %p",*pc);
    return 0;
  }