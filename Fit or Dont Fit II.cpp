#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        string a,b;
        cin >>a>>b;
        if(a.size()<b.size())
            cout << "nao encaixa"<<endl;
        else{
            int len = a.size() - b.size();
            if(a.substr(len)==b)
                cout<< "encaixa"<<endl;
            else
                cout << "nao encaixa"<<endl;
        }
    }
}
