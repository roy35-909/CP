#include<iostream>
using namespace std;
int main()
{
    int c,times;
    double t,low=0;

    cin >> c;
    low = c;
    for(int i=0;i<c;i++){
        cin >>t;
        if(t<low){
            low= t;
        }

    }
    cout << low <<endl;
    low=0;
    c--;
    for(int j=0;j<c;j++){

        cin >> times;
        for(int i=0;i<times;i++){
        cin >>t;
        if(t<low){
            low= t;
        }
    }
    cout << low <<endl;
    low=0;

    }

}
