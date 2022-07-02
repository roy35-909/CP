#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,sum=0;
    cin >>t;
    long long int arr[t];

    for(long long int i=0;i<t;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    long long int i=0,l=0;
    while(true)
    {
        if(i<0||i>t-1)
            break;
        if(arr[i]>0)
        {
            sum-=1;

        }
        int k = i;
         if(l<i)
            l=i;
        if(arr[i]%2==0)
            i--;
        else{
            i++;
        }
        if(arr[k]>0){
            arr[k]-=1;
        }
    }
cout << l+1 <<" "<<sum <<endl;

}
