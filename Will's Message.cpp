#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
while (cin>>s)
{
    int n;
    cin >>n;
    string line;
    while(n--)
    {
        int a;
        cin>>a;
        line+=s[a-1];

    }
    cout << line <<endl;
}



}
