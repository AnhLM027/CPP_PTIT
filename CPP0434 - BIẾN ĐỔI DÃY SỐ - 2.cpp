#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<ll> b = a;
        for (int i = 0; i < n; i++) {
            if (i == 0) b[i] = a[i] * a[i + 1];
            else if (i == n - 1) b[i] = a[i] * a[i - 1];
            else b[i] = a[i - 1] * a[i + 1];
        }
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}