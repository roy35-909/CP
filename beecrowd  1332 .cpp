#include<bits/stdc++.h>
using namespace std;

int compaire(string w,string s)
{
    int u = 0;
    for(int i=0;i<w.size();i++)
    {
        if(w[i]!=s[i])
            u++;
    }
    return u;
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        string s;
        cin >>s;
        if(compaire(s,"one")<=1)
            cout <<1<<endl;
        else if(compaire(s,"two")<=1)

            cout << 2<<endl;
        else if(compaire(s,"three")<=1)
            cout <<3<<endl;


    }
}
