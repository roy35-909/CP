#include<iostream>
using namespace std;
int main()
{
    int now,higest=0,tracker=0;
    for(int i=1;i<=100;i++){
        cin >> now;
        if(now>higest){
            higest = now;
            tracker = i;
        }
    }
    cout << higest<<endl;
    cout << tracker<<endl;
    return 0;
}
