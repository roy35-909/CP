#include<iostream>
using namespace std;
int main()
{
    int first = 0,sec = 0,n;

    cin >> n;
    while(n!=0)
    {
        int s[n];
        for(int i=0;i<n;i++)
        {
            int a;
            cin >>a;
            s[i] = a;
            if(a>s[first]){
                sec = first;
                first = i;
            }
            else if(a>s[sec]){
                sec = i;
            }
        }
        cout << sec+1<<endl;
        first = 0;sec=0;
        cin >> n;
    }
}
