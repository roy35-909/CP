/*
    Simanta Kumar Roy
    221-35-909
    roy35-909@diu.edu.bd
*/

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int roll;
    int age;
    char name;
    struct Node* next;
};

int main()
{

    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->roll = 1;
    head->age = 18;
    head->name = 'S';
    head->next = second;

    second->roll = 2;
    second->age = 17;
    second->name = 'I';
    second->next=third;

    third->roll=30;
    third->age = 16;
    third->name = 'M';
    third->next = NULL;

    printf("Roll %d : Age %d : Name : %c \n",head->roll,head->age,head->name);
    printf("Roll %d : Age %d : Name : %c \n",second->roll,second->age,second->name);
    printf("Roll %d : Age %d : Name : %c \n",third->roll,third->age,third->name);


}
