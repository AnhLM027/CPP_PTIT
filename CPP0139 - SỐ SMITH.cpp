#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool dp[1000000] = { false };

void prime() {
    dp[0] = true;
    dp[1] = true;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (dp[i] == false) {
            for (int j = i * i; j <= 1000000; j += i)
            {
                if (dp[j] == false) dp[j] = true;
            }
        }
    }
}

int tong(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int check(ll n) {
    ll m = tong(n);
    ll sum = 0;
    int i = 2;
    while (i <= sqrt(n)) {
        if (n % i == 0) {
            while (n % i == 0) {
                sum += tong(i);
                n /= i;
            }
        }
        i++;
    }
    if (n > 1) sum += tong(n);
    return sum == m;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    prime();
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        if (check(n) && dp[n] == true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}