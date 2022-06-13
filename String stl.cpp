#include<bits/stdc++.h>
using namespace std;


void print(std::vector <string> const &a) {
   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';
}

int main(){
vector <string> num;
string a;
cin >> a;

reverse(a.begin(),a.end());
for(auto i:a){
    string temp="";
    if(a.size()>=3){
    temp+=a[0];
    temp+=a[1];
    temp+=a[2];
    a.erase(0,3);}
    else{
        temp+=a;
        a.clear();
    }
    reverse(temp.begin(),temp.end());
    num.push_back(temp);
}

print(num);
}
