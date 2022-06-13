#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[3];
cin >> arr[0];
cin >> arr[1];
cin >> arr[2];
int arr2[3];
arr2[0] = arr[0];
arr2[1] = arr[1];
arr2[2] = arr[2];
for(int i=0;i<3;i++)
{
    for(int j = i+1;j<3;j++){
        int temp=0;
        if(arr[i]>arr[j]){

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }
}

for(int k = 0;k<3;k++){
    cout << arr[k]<<endl;
}
cout << endl;
for(int k = 0;k<3;k++){
    cout << arr2[k]<<endl;
}



}
