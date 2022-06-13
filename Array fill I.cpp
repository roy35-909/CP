#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[10],a;
    cin >>a;
    for(int i=0;i<10;i++)
    {
        arr[i] = a;
        a = a*2;
        printf("N[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
