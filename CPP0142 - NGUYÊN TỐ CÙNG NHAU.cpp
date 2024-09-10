#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

bool dp[100000] = { false };
void prime() {
    dp[0] = true;
    dp[1] = true;
    for (int i = 2; i <= sqrt(100000); i++)
    {
        if (!dp[i])
        {
            for (int j = i * i; j <= 100000; j += i)
            {
                dp[j] = true;
            }
        }
    }
}

int ucln(int a, int b) {
    while (a != 0) {
        int x = a; a = b % a; b = x;
    }
    return b;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    prime();
    int t; cin >> t;
    while (t--)
    {
        int x; cin >> x;
        int cnt = 0;
        for (int i = 1; i <= x; i++) {
            if (ucln(i, x) == 1) cnt++;
        }
        if (!dp[cnt]) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}