
#include<stdio.h>
int main()
{
    int a=15, b=50;
    switch(b)
    {
    case 0 ... 39 :
        printf("Fail\n");
        break;

    case 40 ... 59 :
        printf("C gead ");
        break;
    default:
        printf("all");

    }
}
