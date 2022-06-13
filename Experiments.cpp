#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
    int t,n,total=0,c=0,r=0,s=0;
    float ans;
    char C;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n >> C;
        total+=n;
        if(C=='C'){
            c+=n;
        }
        else if(C=='R'){
            r+=n;
        }
        else if(C=='S'){
            s+=n;
        }
    }

cout<<"Total: "<<total<<" cobaias"<<endl;
cout<<"Total de coelhos: "<<c<<endl;
cout<<"Total de ratos: "<<r<<endl;
cout<<"Total de sapos: "<<s<<endl;

ans = (c*100);
ans = ans/total;
cout << "Percentual de coelhos: ";
printf("%0.2f",ans);
cout << " %"<<endl;

ans = (r*100);
ans = ans/total;
cout << "Percentual de ratos: ";
printf("%0.2f",ans);
cout << " %"<<endl;

ans = (s*100);
ans = ans/total;
cout << "Percentual de sapos: ";
printf("%0.2f",ans);
cout << " %"<<endl;
return 0;
}
