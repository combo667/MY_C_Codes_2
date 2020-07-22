#include<iostream>
int main(void){

char x=127;++x;
std::cout<<" The overflowed value of x is : "<<int(x)<<" The value is : "<<x<<std::endl;



    return 0;
}