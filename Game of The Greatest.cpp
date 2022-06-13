#include<iostream>
using namespace std;
int main()
{
    int r,a,b,ar=0,br=0;
    while(true){
        cin>> r;
        if(r!=0){

            for(int i=0;i<r;i++){
                cin >>a>>b;
                if(a>b){
                    ar++;
                }
                else if(b>a){
                    br++;
                }
            }

        }
        else{
            break;
        }

        cout << ar << " " << br<<endl;
        ar = 0;br=0;


    }
return 0;
}
