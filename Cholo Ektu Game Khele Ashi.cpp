#include<iostream>
using namespace std;
int main()
{
    string name[]={"NVOrder","NVParaboyyy6","NRxFROZENXz","NAVIMATIC666","STEDaoShi"};

    int big=0,temp,number;
    for(int i = 0;i<5;i++)
    {
        cin >> temp;
        if(temp>big){
            big = temp;
            number = i;
        }
    }
    cout << name[number]<<" - " << big*2000 << "$"<<endl;
    return 0;

}
