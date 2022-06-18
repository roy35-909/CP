#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A[12][12];
    char c;
    cin>>c;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            double a;
            cin>>a;
            A[i][j]=a;
        }
    }
    double sum = 0.0;
    for(int i=11;i>=7;i--)
    {
        for(int j=i-1;j>=12-i;j--)
        {
            sum+=A[i][j];
        }
    }
    if(c=='S'){
        printf("%0.1f\n",sum);
    }
    else if(c=='M')
    {
        printf("%0.1f\n",sum/30);
    }
}




