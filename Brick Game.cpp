#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,a,k;
        cin>>n;
        k = n;
        vector<int>v;
        while(n--)
        {
            cin>>a;
            v.push_back(a);
        }
         sort(v.begin(),v.end());
        cout<<"Case "<<i<<": "<<v[(k-1)/2]<<endl;
    }

}
