#include <iostream>
#include <climits>
int main(void){
std::cout<<"The size of int is : "<<sizeof(long long int)<<std::endl;
std::cout<<"The range of int is : "<<INT_MAX<<"  to  "<<INT_MIN<<std::endl;
std::cout<<"The range of int 64bits is : "<<INT64_MAX<<"  to  "<<INT64_MIN<<std::endl;
std::cout<<"The range of char is : "<<CHAR_MAX<<"  to  "<<CHAR_MIN<<std::endl;
std::cout<<"The range of short is : "<<SHRT_MAX<<"  to  "<<SHRT_MIN<<std::endl;
std::cout<<"The range of long long is : "<<LLONG_MAX<<"  to  "<<LLONG_MIN<<std::endl;
std::cout<<"The range of unsigned long long is : "<<ULLONG_MAX<<std::endl;
std::cout<<"The range of long is : "<<LONG_MAX<<"  to  "<<LONG_MIN<<std::endl;
std::cout<<"The range of signed char is : "<<SCHAR_MAX<<"  to  "<<SCHAR_MIN<<std::endl;




    return 0;
}