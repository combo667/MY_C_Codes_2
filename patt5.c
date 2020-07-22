#include<stdio.h>
int main(void){
    int n=0,s=0;
    printf("Input the number of rows : \n");
    scanf("%d",&n);
    printf("Input the number of columns : \n");
    scanf("%d",&s);

int i=0,j=0;
for(i=1;i<=n;++i){
    for(j=1;j<=s;++j){
        if(j>=6-i&&j<=4+i){
            printf("*");
        
        }
        else{
            printf(" ");
        }

    }
    printf("\n");
}



    return 0;
}