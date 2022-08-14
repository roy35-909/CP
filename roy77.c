#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf("Enter a number which is less then 20\n");
    scanf("%d",&n);
    printf("Enter %d numbers for an array\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("Type a index and value for insert : ");
    int new_index,new_value,temp;
    scanf("%d %d",&new_index,&new_value);
    n+=1;
    for(int i=new_index;i<n;i++)
    {
        temp = a[i];
        a[i] = new_value;
        new_value = temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

}
