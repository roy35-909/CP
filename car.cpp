#include<iostream>
using namespace std;
class Student{
public:
int a;
char c;
void setData(int x,char C){

a=x;
c=C;

}
void getData(){
cout << a <<" "<<c<<endl;

}

};

main(){
Student arr[10000];
char c='F';
long int t=100;
int x = 0;
while(c!='Q'){

arr[x].setData(t,c);
x++;
cin >> c>>t;
}
for(int i=x;i>=0;i--){
    arr[i].getData();
}
}
