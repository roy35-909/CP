#include<iostream>
using namespace std;
int main()
{
    long long int prev1=0,prev2=1,Sum,t;
    cin >>t;
    for(int i=0;i<t-1;i++){
        if(i>1){
            Sum=prev1+prev2;
            prev1 = prev2;
            prev2 = Sum;
            cout << prev2<<" ";
        }
        else{
            cout << i << " ";
        }
    }
    cout << prev1+prev2<<endl;
}
