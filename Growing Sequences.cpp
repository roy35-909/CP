#include<iostream>
using namespace std;
int main()
{

    int x;
    while(true)
    {
        cin >> x;
        if(x!=0){
            for(int i=1;i<x;i++){
                cout<<i<<" ";
            }
            cout << x<<endl;
        }
        else{
            break;
        }
    }
    return 0;
}
