#include <bits/stdc++.h>
using namespace std;

int main() {
    map <string, string> mp;
    mp["HELLO"] = "ENGLISH";
    mp["HOLA"] = "SPANISH";
    mp["HALLO"] = "GERMAN";
    mp["BONJOUR"] = "FRENCH";
    mp["CIAO"] = "ITALIAN";
    mp["ZDRAVSTVUJTE"] = "RUSSIAN";
    string s;
    int cnt = 1;
    while (cin >> s && s!="#"){
        cout << "Case " << cnt++ << ": ";
        if (mp.count(s))
            cout << mp[s] << '\n';
        else
            cout << "UNKNOWN" <<'\n' ;
    }
	return 0;
}