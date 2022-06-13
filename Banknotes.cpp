#include<bits/stdc++.h>
using namespace std;
int main(){

double a ,b;
int taka100=0,taka50=0,taka20=0,taka10=0,taka5=0,taka2=0,coin1=0,coin05=0,coin025=0,coin010=0,coin005=0,coin001=0;

cin >> a;
b=0;
while(true)
{
    if(b+100<=a){
        b+=100;
        taka100+=1;
    }
    else if(b+50<=a){
        b+=50;
        taka50+=1;
    }

    else if(b+20<=a){
        b+=20;
        taka20+=1;
    }
     else if(b+10<=a){
        b+=10;
        taka10+=1;
    }
     else if(b+5<=a){
        b+=5;
        taka5+=1;
    }
     else if(b+2<=a){
        b+=2;
        taka2+=1;
    }
     else if(b+1<=a){
        b+=1;
        coin1+=1;
    }
     else if(b+0.5<=a){
        b+=0.5;
        coin05+=1;
    }
         else if(b+0.25<=a){
        b+=0.25;
        coin025+=1;
    }
         else if(b+0.10<=a){
        b+=0.10;
        coin010+=1;
    }
         else if(b+0.05<=a){
        b+=0.05;
        coin005+=1;
    }
         else if(b+0.01<=a){
        b+=0.01;
        coin001+=1;
    }
    else{
        break;
    }


}
cout<<"NOTAS:"<<endl;
cout << taka100<<" nota(s) de R$ 100.00"<<endl;

cout << taka50<<" nota(s) de R$ 50.00"<<endl;

cout << taka20<<" nota(s) de R$ 20.00"<<endl;

cout << taka10<<" nota(s) de R$ 10.00"<<endl;

cout << taka5<<" nota(s) de R$ 5.00"<<endl;

cout << taka2<<" nota(s) de R$ 2.00"<<endl;

cout<<"MOEDAS:"<<endl;

cout << coin1<<" moeda(s) de R$ 1.00"<<endl;

cout << coin05<<" moeda(s) de R$ 0.50"<<endl;

cout << coin025<<" moeda(s) de R$ 0.25"<<endl;

cout << coin010<<" moeda(s) de R$ 0.10"<<endl;

cout << coin005<<" moeda(s) de R$ 0.05"<<endl;

cout << coin001<<" moeda(s) de R$ 0.01"<<endl;


return 0;

}
