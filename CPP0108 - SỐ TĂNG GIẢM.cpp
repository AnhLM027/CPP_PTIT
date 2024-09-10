#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int a[11] = { 0 };
int n, cnt;

int snt(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return n > 1;
}

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= 9 - n + i; j++) {
        a[i] = j;
        if (i == n) {
            int tang = 0;
            int giam = 0;
            for (int k = 1; k <= n; k++) {
                tang = tang * 10 + a[k];
                giam = giam * 10 + a[n - k + 1];
            }
            if (snt(tang)) cnt++;
            if (snt(giam)) cnt++;
        }
        else Try(i + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
    return 0;
}