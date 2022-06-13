#include<iostream>
using namespace std;
int main()
{
    int x,z=-1000000,c=1,s=0;
    cin >>x;
    while(z<=x){

        cin>>z;
    }
    s=x;
    while(s<z){
        x++;
        s+=x;
        c++;

    }
    cout << c <<endl;
}
