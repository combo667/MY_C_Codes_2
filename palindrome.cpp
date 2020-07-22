#include <stdio.h>
void  palindrome(int);
int main(int argc, const char** argv) {
    int n=0;
 printf("Input a number : \n");
 scanf("%d",&n);

palindrome(n);

 
    return 0;
}

void palindrome (int x){
    int n=x;
    int sum=0,mod=0;
    while(x!=0){
    mod=x%10;
    sum=sum*10+mod;    
    x/=10;}

    if(sum==n){
    printf("The given number is palindrome number !\n");
    }
    else{
        printf("The given number is not palindrome !\n");
    }
    



}