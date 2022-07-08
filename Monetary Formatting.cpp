#include<bits/stdc++.h>
using namespace std;
int main()
{
    string taka;
    string coin;
    while(cin >> taka >> coin)
    {
        string s="$";
        int l = taka.size();
        if(l>=3){
        for(int i=0;i<l%3;i++)
        {
            s+=taka[i];
            if(i==(l%3)-1)
                s+=',';
        }
        int c = 1;
        for(int i=l%3;i<l;i++)
        {
            s+=taka[i];
            if(i==l-1){
                s+='.';
            }

            if(c==3&&i!=l-1)
            {
                s+=',';
                c=0;
            }

            c++;
        }
        }
        else{
            s+=taka;
            s+='.';
        }
        if(coin.size()==1)
        {
            s+='0';
            s+=coin;
        }
        else{
            s+=coin;
        }

        cout <<s<<endl;
    }
}
