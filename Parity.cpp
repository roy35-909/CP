#include<bits/stdc++.h>
using namespace std;
int main()
{
    string bits;
    cin>>bits;
    int sum =0;
    for(auto bit : bits)
        sum+=bit-'0';
    sum%2==0?bits+='0':bits+='1';
    cout <<bits<<endl;
}
