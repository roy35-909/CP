#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    while(cin >>s)
    {
    int m=0;
    char mm;

    int l = s.size();
    if(l>1001)
        l=1001;
    for(int i=0;i<l;i++)
    {
        int c = 0;
        for(int j=0;j<l;j++)
        {
            if(s[i]==s[j])
                c++;
        }
        if(c>m)
        {
            m = c;
            mm = s[i];
        }
        else if(c==m){
            if((s[i]-'0')>mm-'0')
            {
                m = c;
                mm=s[i];
            }
        }
    }
    cout << mm<<endl;
    }
}
