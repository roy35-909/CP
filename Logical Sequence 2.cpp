#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin >> x>>y;
    for(int i=1;i<=y;i+=x){
        for(int j=0;j<x-1;j++){
            cout <<i+j<<" ";
        }
        cout<<i+x-1<<endl;
    }
}
