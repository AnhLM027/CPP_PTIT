#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int dp[100000] = { 0 };
void prime() {
    memset(dp, 0, sizeof(dp));
    dp[1] = 1;
    for (int i = 2; i <= sqrt(100000); i++) {
        if (dp[i] == 0) {
            for (int j = i * i; j <= 100000; j += i) {
                if (dp[j] == 0) dp[j] = i;
            }
        }
    }
    for (int i = 0; i <= 100000; i++) {
        if (dp[i] == 0) dp[i] = i;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    prime();
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        for (int i = 1; i <= n; i++) cout << dp[i] << " ";
        cout << endl;
    }
    return 0;
}