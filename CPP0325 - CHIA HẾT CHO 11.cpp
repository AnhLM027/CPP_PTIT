#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int tmp1 = 0, tmp2 = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 0) tmp1 += s[i] - '0';
            else tmp2 += s[i] - '0';
        }
        if ((tmp2 - tmp1) % 11 == 0) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}
