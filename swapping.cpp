#include <iostream>
void swapping(int,int);
void swap_without_variables(int,int);
int main(void){
unsigned int a=0,b=0;
std::cout<<"Input the value of a and b : \n";
std::cin>>a>>b;
std::cout<<"The initial value of a is : "<<a<<"\n";
std::cout<<"The initial value of b is : "<<b<<"\n";
swapping(a,b);
std::cout<<"\n\n";
swap_without_variables(a,b);

return 0;

}

void swapping(int a,int b){
    unsigned int c=a;
    a=b;
    b=c;
    std::cout<<"After Swapping : \n";
    std::cout<<"The value of a is : "<<a<<"\n";
    std::cout<<"The value of b is : "<<b<<"\n";
}

void swap_without_variables(int a,int b){
    a+=b;
    b=a-b;
    a=a-b;
    std::cout<<"After Swapping : \n";
    std::cout<<"The value of a is : "<<a<<"\n";
    std::cout<<"The value of b is : "<<b<<"\n";
    
}