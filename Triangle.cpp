#include<iostream>
#include<stdio.h>
using namespace std;

double big(double num1,double num2,double num3)
{
    double big;
    if(num1>num2&&num1>num3) {
		big = num1;
	} else if(num2>num1&&num2>num3) {
		big = num2;
	} else {
		big = num3;
	}

	return big;
}
int main()
{

   double sum = 0;

    double ar[3];
    cin >> ar[0] >> ar[1] >> ar[2];
    for(int i=0;i<3;i++){
        if(ar[i]!=big(ar[0],ar[1],ar[2])){
            sum+=ar[i];

        }

    }
    if(big(ar[0],ar[1],ar[2])<sum){
            double p= ar[0]+ar[1]+ar[2];

        cout<<"Perimetro = ";printf("%0.1f",p);cout<<endl;
    }
    else{
            double a = (ar[1]+ar[0])*ar[2]*0.5;
        cout <<"Area = ";printf("%0.1f",a);cout <<endl;
    }
    return 0;
}


