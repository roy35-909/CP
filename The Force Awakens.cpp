#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    int arr[a][b];
    vector<int>row;
    vector<int>col;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==42&&i>0&&j>0&&j<b-1&&i<a-1)
            {
                row.push_back(i);
                col.push_back(j);
            }
        }
    }
    int flag = 1;
    for(int i=0;i<row.size();i++)

    {
        if(col[i]>0&&row[i]>0&&col[i]<b-1&&row[i]<a-i){
        if(arr[row[i]+1][col[i]]==7&&arr[row[i]+1][col[i]+1]==7&&arr[row[i]+1][col[i]-1]&&arr[row[i]][col[i]+1]==7&&arr[row[i]][col[i]-1]==7&&arr[row[i]-1][col[i]-1]==7&&arr[row[i]-1][col[i]]==7&&arr[row[i]-1][col[i]+1]==7)
        {
            cout << row[i]+1<<" "<<col[i]+1<<endl;
            flag = 0;
        }
        }
    }
    if(flag)
        cout << 0<<" "<<0<<endl;
}
