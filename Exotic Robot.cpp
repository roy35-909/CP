#include<iostream>
using namespace std;

int main()
{
   int c;
   cin>>c;
   for(int i=1;i<=c;i++)
   {
       int l,r;
       if(l==0&&r==0)
       {
           cout << "Case "<<i<<": "<<0<<0;
       }
       else if(l<0&&r<0)
       {
           int m=r;
           int minn=0;
           for(int i=l;i<=r;i++)
           {
               minn+=i;
           }
           cout << "Case "<<i<<": "<<m<<minn;
       }
       else if(l>0&&r>0)
       {
           int minn = l;
           int m = 0;
           for(int i=l;i<=r;i++){
            m+=i;
           }
           cout << "Case "<<i<<": "<<m<<minn;
       }
       else if(l<0&&r>0){
        int minn = 0;
        int m = 0;
        for(int i=0;i>=l;i--){
            minn+=i;
        }
        for(int i=0;i<=r;i++){
            m+=1;
        }
        cout << "Case "<<i<<": "<<m<<minn;
       }
   }
}
