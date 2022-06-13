#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int x;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >>x;
        int flag = 0;
        for(int j=2;j<x;j++){
            if(x%j==0){
                cout << x<< " nao eh primo"<<endl;
                flag+=1;
                break;
            }
        }
        if(flag==0){
            cout << x <<" eh primo"<<endl;
        }
    }
    return 0;

}
