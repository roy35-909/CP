#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >>t;

 while(t!=0)
 {
    vector<int>v;
    vector<int>c;

    while(t--){
    int a;
    cin >>a;
    v.push_back(a);
    }
    c = v;

    int s = c.size();
    sort(c.begin(),c.end());

    for(int i=0;i<v.size();i++){
      if(v[i]==c[s-2]){
        cout<<i+1<<endl;
      }
    }

  cin >>t;
 }


}
