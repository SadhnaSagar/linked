#include<stdio.h>
int main()
{
    int i,j,a[50],n,max;
    printf("enter the size");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the elements");
        scanf("%d",&a[i]);
        if(a[i]<a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}
