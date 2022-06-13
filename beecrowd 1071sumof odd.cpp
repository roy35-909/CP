#include<bits/stdc++.h>
using namespace std;
int main(){
int s,b,x,y,i,summ=0;
cin >>x;
cin >> y;
if(x==y){
    cout << 0<<endl;
}
else{
    if(x>y){
        b = x;
        s = y;
    }
    else{
        b=y;
        s=x;
    }
}

for(i=s;i<=b;i++){

    if(i%2!=0){

        summ+=i;
    }
    else{
  continue;
    }

}
cout << summ<<endl;
return 0;
}
