#include <iostream>
void rev(unsigned int *a,unsigned int *b,unsigned int *c);

int main(void){

    unsigned int a=0,b=0,c=0;
    std::cout<<"Input a,b,c respectively : \n";
    std::cin>>a>>b>>c;
    std::cout<<"\n The initial value of a,b,c are respectively as :"<<a<<b<<c;
    rev(&a,&b,&c);
    std::cout<<"\n The final value of a,b,c is respectively as follows : "<<a<<b<<c;
}

void rev(unsigned int *a,unsigned int *b,unsigned int *c){

    int temp;
    temp=*a;
    *a=*c;
    *c=*b;
    *b=temp;
    
}
