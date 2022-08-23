/*
        Author : Simanta Kumar Roy
        Daffodil International University
        221-35-909
        roy35-909@diu.edu.bd
*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a Array size :");
    scanf("%d",&n);
    int a[n+n];
    printf("Enter %d numbers for an array\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Enter [%d] Index value for this array : ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

         printf("\nType a index and value1 and value2 for insert : ");
    int new_index,new_value,temp,value_2;
    scanf("%d %d %d",&new_index,&new_value,&value_2);
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

