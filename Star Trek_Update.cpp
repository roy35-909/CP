#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    int l=t,arr[t],sum=0,flag=0;
    for(int i=0;i<t;i++)
    {
        int a;
        cin >>a;
        arr[i]=a;
        sum +=a;
        if(a%2==0){
            if(l>i)
                l=i;
            flag = 1;
        }
    }
    if(flag)
    {
        cout << l+1<<" "<<sum-(l*2)+1<<endl;
    }
    else{
        cout << t <<" "<<sum - (t*2)+1<<endl;
    }

}
