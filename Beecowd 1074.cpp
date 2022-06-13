#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,n;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    for(j=0;j<n;j++){



        if(arr[j]==0){
            cout << "NULL"<<endl;
        }
        else{
            if(arr[j]%2==0){
                cout << "EVEN ";
            }
            else{
                cout << "ODD ";
            }
            if(arr[j]<0){
                cout << "NEGATIVE"<<endl;
            }
            else{
                cout << "POSITIVE"<<endl;
            }
        }
    }
    return 0;
}
