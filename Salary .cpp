#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    float a,p,n;
    cin >> a;
    if(a>=0&&a<=400)
    {
        int r = 15;
        p = (a * r) / 100;
        n = a+p;
        cout << "Novo salario: ";
        printf("%0.2f\n",n);
        cout << "Reajuste ganho: ";
        printf("%0.2f\n",p);
        cout << "Em percentual: ";
        printf("%d",r);
        cout << " %" <<endl;

    }
    else if(a>=400.01&&a<=800)
    {
        int r = 12;
        p = (a * r) / 100;
        n = a+p;
        cout << "Novo salario: ";
        printf("%0.2f\n",n);
        cout << "Reajuste ganho: ";
        printf("%0.2f\n",p);
        cout << "Em percentual: ";
        printf("%d",r);
        cout << " %" <<endl;
    }
    else if(a>=800.01&&a<=1200){
        int r = 10;
        p = (a * r) / 100;
        n = a+p;
        cout << "Novo salario: ";
        printf("%0.2f\n",n);
        cout << "Reajuste ganho: ";
        printf("%0.2f\n",p);
        cout << "Em percentual: ";
        printf("%d",r);
        cout << " %" <<endl;
    }
    else if(a>=1200.01&&a<=2000)
    {
        int r = 7;
        p = (a * r) / 100;
        n = a+p;
        cout << "Novo salario: ";
        printf("%0.2f\n",n);
        cout << "Reajuste ganho: ";
        printf("%0.2f\n",p);
        cout << "Em percentual: ";
        printf("%d",r);
        cout << " %" <<endl;
    }
    else{
        int r = 4;
        p = (a * r) / 100;
        n = a+p;
        cout << "Novo salario: ";
        printf("%0.2f\n",n);
        cout << "Reajuste ganho: ";
        printf("%0.2f\n",p);
        cout << "Em percentual: ";
        printf("%d",r);
        cout << " %" <<endl;
    }

    return 0;
}
