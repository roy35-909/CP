#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 vector<int>v;
 vector<int>c;
 int cc=0;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     v.push_back(n);
 }


 for(int i=0;i<v.size();i++)
 {
     int flag = 0;
     for(int j=0;j<c.size();j++)
     {
         if(v[i]==c[j])
         {
             flag = 1;
         }
     }
     if(flag==0){
        c.push_back(v[i]);

     }
 }
sort(c.begin(),c.end());
 for(int i=0;i<c.size();i++)
 {
     cout << c[i] <<" aparece "<<count(v.begin(),v.end(),c[i])<<" vez(es)"<<endl;
 }



}
