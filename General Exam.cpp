#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    while(cin>>n>>q){
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end(),greater<int>());
        while(q--)
        {
            int a;
            cin>>a;
            cout<<v[a-1]<<"\n";
        }
    }
}
