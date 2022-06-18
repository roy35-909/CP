#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n=2,value = 4;
    vector<int>v;
    v[0] = 4;

    while(n<=t)
    {
        for(int i=value+1;i<=n;i++)
        {
            v.push_back(i);
        }
        value = value+1+n;
        n = n*2;
    }
    for(int i=0;i<v.size();i++){
        cout<< v[i] <<endl;
    }
}
