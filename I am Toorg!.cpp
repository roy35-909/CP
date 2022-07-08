#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t ;
    t++;
    while(t--){
    string s;
    getline(cin,s);
    if(s[s.size()-1]=='?')
        cout << "I am Toorg!"<<endl;
    }
}

