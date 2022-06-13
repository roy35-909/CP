#include<iostream>
using namespace std;
int main(){

int a,b,mini,maxi;
cin >>a;
cin >>b;
if(a>b){
    mini=b;
    maxi=a;
}
else{
    mini=a;
    maxi=b;
}
for(int i=mini+1;i<maxi;i++){
    if(i%5==3||i%5==2){
        cout << i<<endl;
    }

}

}
