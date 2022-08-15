#include<stdio.h>
int main()
{
    int n,s;
    printf("What is your Array Size : ");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter Element for this Array [%d] = ",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);

    int min = 0,max = n-1;
    printf("\nEnter a Element for src : ");
    scanf("%d",&s);
    while(1)
    {

       int mid = (min+max)/2;
        if(arr[mid]!=s&&min==max){
            printf("\n Not Found !!");
            break;
        }
        else
            if(arr[mid]==s){
                printf("\n %d ",mid);
                break;
            }
            else if(arr[mid]<s)
                min = mid+1;
            else if(arr[mid]>s)
                max = mid-1;
    }
}

