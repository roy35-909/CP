#include<bits/stdc++.h>
using namespace std;
long long int febb(int x)
{
    long long int arr[x+1];
    arr[0] = 0;arr[1] = 1;
    if(x>1){
        for(int i=2;i<=x;i++)
        {
            arr[i] = arr[i-2]+arr[i-1];
        }
    }
    return arr[x];
}
int main()
{
    int x,y;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        cin >> y;
        printf("Fib(%d) = %lli\n",y,febb(y));
    }
    return 0;
}
