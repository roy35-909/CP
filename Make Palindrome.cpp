
#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{
	string P = S;

	reverse(P.begin(), P.end());
	if (S == P) {
		return "Yes";
	}
	else {

		return "No";
	}
}
int main()
{
int c;
cin >> c;
for(int i=0;i<c;i++){
    int cas = 0;
    string s;
    cin >> s;
    while(true){
        if(isPalindrome(s)=="Yes"){
            break;
        }
        else{
            s[cas+1] = s[cas+1] - 1;
            cas++;

        }

    }
    cout << cas;

}


	return 0;
}

