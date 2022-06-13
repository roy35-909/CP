#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
double Area(double a,double b){
double area = a*b;

area = area/10000;
return area;

}

int main(){

int n,h,c,l;
while(cin >>n){
cin >>h>>c>>l;
int x = sqrt(pow(n*h,2)+pow(n*c,2));
double ar = Area(x,l);
printf("%0.4f\n",ar);

}
}
