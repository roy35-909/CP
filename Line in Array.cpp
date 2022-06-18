#include<bits/stdc++.h>
using namespace std;
int main()
{
    float A[12][12];
    int r;
    char c;
    cin>> r;
    cin>>c;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            float a;
            cin>>a;
            A[i][j]=a;
        }
    }
    float sum = 0.0;
    for(int i=0;i<12;i++)
    {
        sum = sum + A[r][i];
    }
    if(c=='S'){
        printf("%0.1f\n",sum);
    }
    else if(c=='M')
    {
        printf("%0.1f\n",sum/12);
    }
}
