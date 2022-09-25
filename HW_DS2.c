/*
        Author : Simanta Kumar Roy
        Daffodil International University
        221-35-909
        roy35-909@diu.edu.bd
*/

#include <stdio.h>
#include<string.h>
int main()
{
    char arr[5];


    void insert_char(int index,char a[],char c[])
    {

        if(strlen(a)==0)
            strcpy(a,c);
       else
            strcat(a,c);

    }

   void del(char c[],int index)
   {
       memmove(&c[index], &c[index + 1], strlen(c) - index);
   }
   void print(char c[])
   {
       puts(c);

   }

   while(1)
   {
       int chose;
       printf("1 for insert");
   }

   printf("Enter 3 Char : ");
   char temp[3];
   scanf("%s",&temp);
   insert_char(0,arr,temp);
   print(arr);

   printf("Which Element You want to delent Enter Index : ");
   int index;
   scanf("%d",&index);
   del(arr,index);
   print(arr);


    printf("Enter 2 Char : ");
   char temp2[3];
   scanf("%s",&temp2);
   insert_char(2,arr,temp2);
   print(arr);

     printf("Which Element You want to delent Enter Index : ");

   scanf("%d",&index);
   del(arr,index);
   print(arr);

    printf("Enter 2 Char : ");
   char temp3[3];
   scanf("%s",&temp3);
   insert_char(4,arr,temp3);
   print(arr);

   printf("Which Element You want to delent Enter Index : ");

   scanf("%d",&index);
   del(arr,index);
   print(arr);

   printf("Enter 1 Char : ");
   char temp4[1];
   scanf("%s",&temp4);
   insert_char(4,arr,temp4);

    printf("\nNo more char else overflow\n");
    for(int i=4;i>=0;i--)
        printf("%c",arr[i]);



}

