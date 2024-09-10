#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        string tmp = s;
        reverse(s.begin(), s.end());
        if (s == tmp) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}