#include<bits/stdc++.h>
using namespace std;
int main()
{
    double v,d,h,a;
    while(cin >> v >> d){

    h = (v*4)/(3.14*d*d);
    a = (3.14*pow(d,2))/4;

    printf("ALTURA = %0.2f\nAREA = %0.2f\n",h,a);
    }
return 0;
}
