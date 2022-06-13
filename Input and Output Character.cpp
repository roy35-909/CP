#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector <char> ch;
 vector <char>::iterator it;
  vector <char>::iterator it2;
   vector <char>::iterator it3;
   char c;
 for(int j=0;j<3;j++)
 {

     cin >> c;
     ch.push_back(c);
 }
it = ch.begin();
it2 = it+1;
it3 = it+2;
for(int i=0;i<3;i++)
{
    cout <<"A = "<<*it<<", "<<"B = "<<*it2 <<", "<<"C = "<<*it3<<endl;
    it++;
    it2++;
    it3++;
    if(it2==ch.end()){
        it2=ch.begin();
    }
    if(it3==ch.end()){
        it3=ch.begin();
    }

}
return 0;
}
