#include<iostream>
#include<stdio.h>
using namespace std;
double Peramiter(double a,double b,double c){
double ans = a+b+c;
return ans;
}
double area(double a,double b,double c){

double ans = c*0.5*(a+b);
return ans;
}

int main(){
double a,b,c,ans;
cin >>a>>b>>c;

if(a+b<=c||b+c<=a||c+a<=b){
    ans = area(a,b,c);
    cout << "Area = ";printf("%0.1f\n",ans);
}
else{
        ans = Peramiter(a,b,c);
    cout << "Perimetro = ";printf("%0.1f\n",ans);
}

}
