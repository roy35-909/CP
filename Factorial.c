#include<stdio.h>
int main()
{
int num,f=1;
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
    f*=i;
}
printf("The factorial of %d is %d",num,f);
return 0;
}
