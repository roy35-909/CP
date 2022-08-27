/*
        Author : Simanta Kumar Roy
        Daffodil International University
        221-35-909
        roy35-909@diu.edu.bd
*/
#include<stdio.h>
int main()
{
int array_size,pointer=0;
printf("Enter array Size : ");
scanf("%d",&array_size);

int arr[array_size]; // It's Best way to Handle Overflow.

for(int i=0;i<array_size;i++)
{
    printf("Array[%d] : ",i);
    scanf("%d",&arr[i]);
}
printf("1st array is full. Now storing in Another Memory for handle Overflow\n");

int  arr2[array_size];
for(int i=0;i<array_size;i++)
{
    printf("Array[%d] : ",i+array_size);
    scanf("%d",&arr2[i]);
}
for(int i=0;i<array_size;i++)
    printf("%d ",arr[i]);
for(int i=0;i<array_size;i++)
    printf("%d ",arr2[i]);

}
