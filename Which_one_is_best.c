/*
        Author : Simanta Kumar Roy
        Daffodil International University
        221-35-909
        roy35-909@diu.edu.bd
*/
#include<stdio.h>
int main()
{
    int n,s;
    printf("What is your Array Size : ");
    scanf("%d",&n);
    int arr[n];
    printf("\n");

    // Enter value on array

    for(int i=0;i<n;i++)
    {
        printf("Enter Element for this Array [%d] = ",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }

    //Printing The array

    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);

        //Bubble sort

  for (int c = 0 ; c < n - 1; c++)
  {
    for (int d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        int swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }

  //Printing Sorted Array
printf("\n");
for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);


        int binary_count=0,linear_count=0;


        //Binary Src algorithm
 int min = 0,max = n-1;
    printf("\nEnter a Element for src : ");
    scanf("%d",&s);
    while(1)
    {
        binary_count++;
       int mid = (min+max)/2;
        if(arr[mid]!=s&&min==max){
            printf("\n Not Found !!");
            break;
        }

            if(arr[mid]==s){
                printf("\nFound Element in index %d by Binary src",mid);
                break;
            }
            else if(arr[mid]<s)
                min = mid+1;
            else if(arr[mid]>s)
                max = mid-1;
    }

    //linear src algorithm

    for(int i=0;i<n;i++)
    {
        linear_count++;
        if(arr[i]==s){
            printf("\nFound Element in index %d by linear src",i);
            break;
        }

    }

    //printing Result

    printf("\n\nBinary src score is : %d",binary_count);
    printf("\nlinear src score is : %d",linear_count);
    if(binary_count>linear_count)
        printf("\n\n Linear Src is best in this case");
    else
        printf("\n\n Binary src is best in this case");

}
