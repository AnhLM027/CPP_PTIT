#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool check(string s) {
    int l = s.length();
    if (s[0] == s[1] && s[0] == s[2] && s[0] == s[4] && s[0] == s[5]) return true;
    if (s[0] == s[1] && s[0] == s[2] && s[4] == s[5]) return true;
    if ((s[0] == '6' || s[0] == '8') &&
        (s[1] == '6' || s[1] == '8') &&
        (s[2] == '6' || s[2] == '8') &&
        (s[4] == '6' || s[4] == '8') &&
        (s[5] == '6' || s[5] == '8')) return true;
    char tmp = s[0];
    for (int i = 1; i < l; i++) {
        if (s[i] == '.') continue;
        if (s[i] <= tmp) return false;
        else tmp = s[i];
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        string tmp = s.substr(5);
        //cout << tmp;
        if (check(tmp)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}