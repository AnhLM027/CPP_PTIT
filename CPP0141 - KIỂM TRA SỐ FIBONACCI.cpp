#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll fibo[93];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 92; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        int ok = 0;
        for (int i = 0; i <= 92; i++) {
            if (fibo[i] >= n) {
                if (fibo[i] == n) ok = 1;
                break;
            }
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}