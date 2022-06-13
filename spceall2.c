#include<stdio.h>
int main()
{
  int n,i,sum=0,number;
  char ch;
  printf("How many numbers :");
  scanf("%d",&n);

  printf("Enter the numbers:\n");
  for(i=1;i<=n;i++)
     {
       scanf("%d",&number);
       scanf("%c",&ch);
       if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
       {
       continue;
        }
        if(number<0){
            break;

        }
       sum=sum+number;

       }
    printf("The sum is = %d\n",sum);

 return 0;



}
