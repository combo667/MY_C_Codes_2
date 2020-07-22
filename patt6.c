#include<stdio.h>
int main(void){
    int n=0,s=0;
    printf("Input the number of rows : \n");
    scanf("%d",&n);
    printf("Input the number of columns : \n");
    scanf("%d",&s);

int i=0,j=0,k=1;
for(i=1;i<=n;++i){
    for(j=1;j<=s;++j){
        if(j>=6-i&&j<=4+i&&k){
            printf("*");
            k=0;
        
        }
        else{
            printf(" ");
            k=1;
        }

    }
    printf("\n");
}



    return 0;
}