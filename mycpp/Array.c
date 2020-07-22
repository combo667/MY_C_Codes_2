#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct Array{

int *p;
int size;
int length;

};

void Display(struct Array arr,int n){
for(int i=0;i<n;++i){
    printf("%d ",arr.p[i]);
}
}
int main(void){
    int n;

    struct Array arr;
    printf("Enter the size of the array :\n");
    scanf("%d",&arr.size);
    printf("Number of elements you want to append ?\n");
    scanf("%d",&n);
    arr.p=(int *)malloc(arr.size*sizeof(int));
    printf("Input the elements one by one :\n");
    for(int i=0;i<n;++i){
    scanf("%d",&arr.p[i]);}
    Display(arr,n);
    free(arr.p);




    return 0;
}
