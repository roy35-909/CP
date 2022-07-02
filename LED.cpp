#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int arr[10] ={2,5,5,4,5,6,3,7,6,6};
    cin>>t;

    while(t--)
    {
        string s;
        cin >>s;
        long long int led = 0;
        for(auto i:s)
        {
            int j = i-'0';
            if(j==0)
            {
                led+=arr[9];
            }
            else{
                led+=arr[j-1];
            }
        }
        cout << led <<" "<<"leds"<<endl;
    }
}
