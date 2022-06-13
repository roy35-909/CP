#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i=19;i>=0;i--)
    {
        cin >> arr[i];
    }
    for(int i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,arr[i]);
    }
return 0;
}
