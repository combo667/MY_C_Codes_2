
#include <stdio.h>
void biggest(int arr[]);
void smallest(int arr[]);
int n=0;
int main(int argc, char const *argv[])
{
    /* code */
    
    printf("Input the size of the array you want : \n");
    scanf("%d",&n);

int a[n];
printf("Input %d elements one by one correspondingly : \n",n);

for (size_t i = 0; i < n; ++i)
{
    scanf("%d",&a[i]);
    
}
//biggest(a);
smallest(a);
/*printf("The elements are as : \n");
int x=0;
while(x!=10){
    printf("%d",a[x]);
    printf("\n");
    x+=1;
}*/

return 0;
}

void biggest(int arr[n]){
    int big=0;
    for (size_t i = 0; i < n; ++i)
    {
        if(arr[i]>big){
            big=arr[i];
        }
    }

    printf("The biggest value in the given array is %d: \n",big);
    



}

void smallest(int arr[n]){

    size_t small=arr[0];
    for (size_t i = 0; i < n; --i)
    {
        if(arr[i]<small){
            small=arr[i];
        }
    }
    printf("The smallest value in the array is %d :\n",small);
    
}