#include<iostream>
#include<string.h>
using namespace std;



string Uniquestr(string stri){

string Unique="",Name;

    Name = stri;
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
    return Unique;


}











int main()
{
    int test;

    cin >> test;
    int Result[test];
    for(int i=0;i<test;i++)

    {
        int number;
        cin >> number;
        string knights = "";
        string city = "";
        for(int j = 0;j<number;j++)
        {
            string temp="";
            cin >> temp;
            knights+=temp;
        }

        city=Uniquestr(knights);
        Result[i] = city.size();


    }
    int s = sizeof(Result)/sizeof(Result[0]);
    for(int e=0;e<s;e++)
    {
        cout <<"Case "<<e+1<<": "<<Result[e]<<endl;
    }


return 0;
    }

