#include<iostream>
#include<cstdlib>
#define MAX 10000
using namespace std;

int main()
{   int n;
   int arr[MAX];
    cout << "Enter a number N :";
    cin >> n;
    for(int f=0;f<n;f++){
        arr[f]= rand();
    }
    for(int m=0;m<n;m++){
        cout << arr[m]<< " ";

    }
    cout << endl;
    // Sorting algorithm for the array

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Sorting array display
    for(int m=0;m<n;m++){
        cout << arr[m]<< " ";

    }


    return 0;
}
