#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ax,ay,bx,by,cx,cy,dx,dy,rx,ry,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy>>rx>>ry;
        if(ax<=rx&&bx>=rx&&ay<=ry&&dy>=ry)
        {
            cout << 1<<endl;
        }
        else{
            cout << 0<<endl;
        }
    }
return 0;
}
