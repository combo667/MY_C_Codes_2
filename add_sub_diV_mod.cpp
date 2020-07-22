#include <iostream>
void addition(int,int);
void subtraction(int,int);
void division(float,float);
void multiplication(int,int);
int main(void){
unsigned int a,b;
std::cout<<"Input the two numbers!\n";
std::cin>>a>>b;

addition(a,b);
std::cout<<"\n";
subtraction(a,b);
std::cout<<"\n";
multiplication(a,b);
std::cout<<"\n";
division(a,b);



}


void addition(int a,int b){

    std::cout<<"\nThe addition of "<<a<<"+"<<b<<" is : "<<a+b;
}

void subtraction(int a,int b){
    if(a>b){
        std::cout<<"The subtraction of "<<a<<"-"<<b<<" is : "<<a-b;
    }
    else{
        std::cout<<"The subtraction of "<<b<<"-"<<a<<" is : "<<b-a;

    }
}

void division(float a,float b){
    if(a>b){
        std::cout<<"The division of "<<a<<"/"<<b<<" is : "<<a/b;

    }
    else{
        std::cout<<"The division of "<<b<<"/"<<a<<" is : "<<b/a;
        
    }
}

void multiplication(int a,int b){
    std::cout<<"The multiplication of "<<a<<"*"<<b<<" is : "<<a*b;
}