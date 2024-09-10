#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int check(string s) {
    int l = s.length();
    if (s[0] == '0') return 2;
    for (int i = 0; i < l; i++) {
        if (!isdigit(s[i])) return 2;
    }
    int cnt[10] = { 0 };
    for (int i = 0; i < l; i++) {
        cnt[s[i] - '0'] = 1;
    }
    for (int i = 0; i < 10; i++) {
        if (cnt[i] == 0) return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        if (check(s) == 1) cout << "YES\n";
        else if (check(s) == 2) cout << "INVALID\n";
        else cout << "NO\n";
    }
    return 0;
}