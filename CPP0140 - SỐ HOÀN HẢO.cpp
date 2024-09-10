#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        if (n > 1e12) {
            cout << "0\n";
            continue;
        }
        ll sum = 1;
        for (int i = 2; i < sqrt(n); i++) {
            if (n % i == 0) {
                sum += i;
                sum += n / i;
            }
        }
        ll x = sqrt(n);
        if (x * x == n) sum += x;
        if (sum == n) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}
