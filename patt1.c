#include <stdio.h>
int main(void){
    int n=0;
    printf("Input the number of lines : \n");
    scanf("%d",&n);
    int i=0,j=0;
    for(i=1;i<=n;++i){
        for(j=1;j<=n+1-i;++j){
   
    printf("*");}
 
        printf("\n");
    }


    





    return 0;
}