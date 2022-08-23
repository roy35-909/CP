#include<stdio.h>
int main()
{
    char arr[5]="abcde";
    char s;

    printf("Enter a Element For search : ");
    scanf("%c",&s);

int flag = 0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==s)
        {
            if(i+1==5)
                printf("\n Element Found on Index %d\n",i);
            else
                printf("\n Element Found on Index %d and next Index is %d\n",i,i+1);
            flag = 1;
            break;
        }
    }

if(!flag)
    printf("\n Not Found \n");


}
