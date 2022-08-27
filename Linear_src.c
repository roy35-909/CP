/*
        Author : Simanta Kumar Roy
        Daffodil International University
        221-35-909
        roy35-909@diu.edu.bd
*/

#include<stdio.h>
int main()
{
    //Array
    char arr[5]={'a','b','c','d','e'};
    char s;

    //Array Printing
    for(int i=0;i<5;i++)
        printf(" %c ",arr[i]);


     //Which Element You want to print
    printf("\n Enter a Element For search : ");
    scanf("%c",&s);


// Linear Search algorithm
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
//IF we not found any Element the Flag value is 0 , So it means False . In This case we negative the logical preposition .

if(!flag)
    printf("\n Not Found \n");


}
