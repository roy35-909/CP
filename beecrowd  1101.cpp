#include<bits/stdc++.h>
using namespace std;

int mini[10000000],maxi[10000000],summ[10000000],ii;
void addition(int a,int b,int i){
int s=0;
for(int j=a;j<=b;j++){

    s+=j;

}
summ[i] = s;


}

void fun(int a,int b,int i){
if(a>b){
    maxi[i] = a;
    mini[i] = b;
    addition(b,a,i);
}
else{
    maxi[i] = b;
    mini[i] = a;
    addition(a,b,i);
}


}
void Display(int x){

for(int k=0;k<x;k++){
    for(int h=mini[k];h<=maxi[k];h++){
        cout << h << " ";
    }
    cout << "Sum="<<summ[k]<<endl;

}


}


int main()
{
int a,b,i=0;
while(true){

    cin >> a >> b;
    if(a<=0||b<=0){
     break;
    }
    else{
               fun(a,b,i);
         for(int h=mini[i];h<=maxi[i];h++){
        cout << h << " ";
          }
          cout << "Sum="<<summ[i]<<endl;
        i+=1;



    }


}


}
