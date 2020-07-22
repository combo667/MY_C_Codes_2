#include <stdio.h>
int main(void){
char x='A';

char *p=&x;
p+=2;
//c=sizeof(x);
printf("%u\nokdok\n",p);




    return 0;
}