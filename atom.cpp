#include<bits/stdc++.h>
using namespace std;
void print(vector <string> number)
{
for(int i=number.size()-1;i>=0;i--){
  cout << number.at(i);
  if(i!=0)
    {
    cout << ",";
  }
}
}

int main()
{
  vector <string> number;
  number.push_back("Hello");
  number.push_back("world");
  print(number);
  return 0;

}
