#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string Unique="",Name;

    cin >> Name;
    Unique+=Name[0];
    for(int i=0;i<Name.size();i++)
    {
        bool flag = false;
        for(int j=0;j<Unique.size();j++)
        {
            if(Name[i]==Unique[j])
            {
                flag = true;
                break;
            }
        }
        if(flag==false)
        {
            Unique+=Name[i];
        }

    }
    cout << Unique;
}
