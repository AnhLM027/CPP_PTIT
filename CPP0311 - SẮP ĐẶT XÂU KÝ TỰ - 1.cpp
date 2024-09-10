#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int te; cin >> te;
    while (te--)
    {
        string s; cin >> s;
        map<char, int> m;
        for (int i = 0; i < s.length(); i++) m[s[i]]++;
        int maxxh = 1;
        int cnt = 0;
        for (pair<char, int> x : m) {
            cnt += x.second;
            maxxh = max(maxxh, x.second);
        }
        if (maxxh <= cnt - maxxh + 1) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}