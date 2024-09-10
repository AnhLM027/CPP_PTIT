#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

bool dp[1000000] = { false };
void prime() {
    dp[0] = true;
    dp[1] = true;
    for (int i = 2; i <= sqrt(1000000); i++) {
        if (dp[i] == false) {
            for (int j = i * i; j <= 1000000; j += i) {
                if (dp[j] == false) dp[j] = true;
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    prime();
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        int cnt = 0;
        for (int i = 1; i <= sqrt(n); i++) {
            if (!dp[i]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}