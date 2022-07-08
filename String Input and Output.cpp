#include<bits/stdc++.h>
using namespace std;
int main()
{
    string v1,v2,v3;
    getline(cin,v1);
    getline(cin,v2);
    getline(cin,v3);
    cout <<v1+v2+v3<<endl;
    cout <<v2+v3+v1<<endl;
    cout <<v3+v1+v2<<endl;
    cout <<v1.substr(0,10) + v2.substr(0,10) + v3.substr(0,10)<<endl;


}
