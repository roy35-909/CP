#include<bits/stdc++.h>
using namespace std;
void printodd(int arr[5],int x)
{
    for(int i=0;i<x;i++)
    {
        printf("impar[%d] = %d\n",i,arr[i]);
    }
}

void printeven(int arr[5],int x)
{
    for(int i=0;i<x;i++)
    {
        printf("par[%d] = %d\n",i,arr[i]);
    }
}


int main()
{
    int oddar[5],evenarr[5],odd=0,even=0,a;
    for(int i=0;i<15;i++)
    {
        cin >>a;
        if(a%2==0)
        {
            if(even>=5){
                printeven(evenarr,5);
                even = 0;
            }
            evenarr[even] = a;
            even+=1;
        }
        else{
            if(odd>=5){
                printodd(oddar,5);
                odd=0;
            }
            oddar[odd] = a;
            odd+=1;
        }
    }
    printodd(oddar,odd);
    printeven(evenarr,even);
}
