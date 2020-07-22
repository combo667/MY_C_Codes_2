#include <iostream>
#include <string>

int main(void){
    std::string x="hello";
    for(auto &r:x){
        r=toupper(r);
    }
    std::cout<<x<<std::endl;





return 0;}
