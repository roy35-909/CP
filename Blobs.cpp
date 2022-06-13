#include<iostream>
using namespace std;
int main()
{
    int t;
    double x;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        int c = 0;
        cin >>x;

        while(true){

            if(x<=1){
                break;
            }
            else{
                c++;
            }
            x=x/2;
        }
        cout << c<<" dias"<<endl;
    }
}
