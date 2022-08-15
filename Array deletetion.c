#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number which is less then anything \n");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter %d numbers for an array\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("Type a index and value for insert : ");
    int del_index;
    scanf("%d",&del_index);
    for(int i=del_index;i<n;i++)
    {
        a[i] = a[i+1];
    }
    n-=1;
     for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
