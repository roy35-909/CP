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
    int del_index,del_value;
    while(1)
        if(n)
        break;
    {
        int flag=0;
    printf("\n Element that you want to delet : ");
    scanf("%d",&del_value);
    for(int i=0;i<n;i++)
    {
        if (a[i]==del_value)
        {
            del_index = i;
            flag = 1;
            break;
        }
    }
    if(flag){
    for(int i=del_index;i<n;i++)
    {
        a[i] = a[i+1];

    }

    n-=1;
     for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    }
    else{
        printf("\nYour Element Not Found ");
    }
    }

}
