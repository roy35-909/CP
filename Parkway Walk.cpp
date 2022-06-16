#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sum=0,a;
        cin >> n>>m;
        while(n--){
            cin >>a;
            sum+=a;
        }
        if((sum-m)<=0){
            cout << 0<<endl;
        }
        else{
            cout <<sum-m <<endl;
        }
    }
}
