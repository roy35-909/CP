#include<iostream>
using namespace std;
int main()
{
    long long int a;
    long long int b;
    while(cin >> a>> b){
        if((a-b)<0){
            cout << b-a << endl;
        }
        else{
            cout << a-b << endl;
        }

    }
    return 0;
}
