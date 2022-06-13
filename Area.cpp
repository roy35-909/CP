#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a>>b>>c;

    double area1=a*c*0.5;
    double area2 = 3.14159*c*c;
    double area3 = 0.5*c*(a+b);
    double area4 = b*b;
    double area5 = a*b;
    cout << "TRIANGULO: ";printf("%.3f",area1);cout<<endl;
    cout <<"CIRCULO: ";printf("%.3f",area2);cout<<endl;
    cout <<"TRAPEZIO: ";printf("%.3f",area3);cout<<endl;
    cout <<"QUADRADO: ";printf("%.3f",area4);cout<<endl;
    cout <<"RETANGULO: ";printf("%.3f",area5);cout<<endl;
    return 0;

}
