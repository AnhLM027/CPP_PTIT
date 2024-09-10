#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool dp[10000005] = { false };
vector<ll> primes;

void sang() {
    dp[0] = true, dp[1] = true;
    for (int i = 2; i <= sqrt(10000000); i++) {
        if (!dp[i]) {
            for (int j = i * i; j <= 10000000; j += i) {
                if (!dp[j]) dp[j] = true;
            }
        }
    }
    for (ll i = 0; i <= 10000000; i++) {
        if (!dp[i]) primes.push_back(i);
    }
}

int main() {
    sang();
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        int cnt = 0;
        ll i = primes[cnt];
        vector<pair<ll, int>> res;
        while (i <= sqrt(n)) {
            if (n % i == 0) {
                int dem = 0;
                while (n % i == 0) {
                    dem++;
                    n /= i;
                }
                res.push_back({ i,dem });
            }
            else i = primes[cnt++];
        }
        if (n > 1) res.push_back({ n,1 });
        for (pair<ll, int> x : res) {
            cout << x.first << " " << x.second << endl;
        }
        cout << endl;
    }
    return 0;
}