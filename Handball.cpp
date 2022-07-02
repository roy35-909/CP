#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,sum=0;
    cin >> m >>n;
    for(int i=0;i<m;i++)
    {
        bool flag = true;
        for(int j=0;j<n;j++)
        {
            int a;
            cin >>a;
            if(a==0)
                flag = false;
        }
        if(flag)
            sum+=1;

    }
    cout<<sum<<endl;
}
