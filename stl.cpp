#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    vector <string> s;
    vector<double> s2;
    vector<double>::iterator it2;
    vector <string>::iterator it;
    s.pb("Hello");
    s2.pb(70);
    s2.pb(60);
    s2.pb(50);
    sort(s2.begin(),s2.end());
    it2 = s2.begin();
    for(it2;it2!=s2.end();it2++){
        cout << *it2 << endl;

    }
    it = s.begin();
    cout << *it << endl;


    cout << s[0];
}
