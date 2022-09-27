/*
    Simanta Kumar Roy
    Daffodil International University
    roy35-909@diu.edu.bd
    221-35-909
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    struct Node {
        int num;
        int pos;
        int *ptr;
    };


    typedef struct Node node;
    node *NODE,*first,*temp = 0;


    char choice = 'O';
    first = 0;
    printf("Type Any char For Exit . Else Keep Adding number :) :) \n\n");
    int count = 0;


    while(1)
    {
        NODE = (node *)malloc(sizeof(node));
        printf("Insert %d Index Data : ",count);
        if(scanf("%d",&NODE->num)){
                NODE->pos = count;
        }
        else{
            break;
        }


        if(first==0)
        {
            first = temp = NODE;
        }
        else{
            temp->ptr = NODE;
            temp = NODE;
        }
        fflush(stdin);
    count++;

    }

    temp->ptr = 0;
    temp = first;



    //Printing List :
    printf("\n Printing The linked List.\n\n");
    while(temp!=0)
    {
        printf("[Index : %d] =  %d\n",temp->pos,temp->num);
        temp = temp->ptr;
    }






    //Insert A number Befor x;
    fflush(stdin);
    node data;
    printf("\nEnter a [Value and index] for Insert (Except Last Index) : ");
    scanf("%d%d",&data.num,&data.pos);

        // If You want to add in 0th index
        if(data.pos==0){
            data.ptr = first;
            first = &data;
            count = 0;
            temp = first;
            while(temp!=0)
            {
                temp->pos = count;
                count++;
                temp = temp->ptr;
            }
        }
        // If You want to add in any Position Except Last
        else{
            int i = data.pos -1;
            temp = first;
            //Finding The Index And Insert Node.
            while(temp!=0)
            {
                if(temp->pos==i){
                    data.ptr = temp->ptr;
                    temp->ptr = &data;
                    break;
                }
                temp = temp->ptr;
            }

            count = 0;
            temp = first;
            while(temp!=0)
            {
                temp->pos = count;
                count++;
                temp = temp->ptr;
            }
        }



    //Printing Updated Linked List
    temp = first;
    while(temp!=0)
    {
        printf("[Index : %d] =  %d\n",temp->pos,temp->num);
        temp = temp->ptr;
    }



}
