#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        ll n, x; cin >> n >> x;
        vector<int> a(n);
        set<int> s;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        int ok = -1;
        for (int i = 0; i < n; i++) {
            int tmp = x + a[i];
            if (s.count(tmp)) {
                ok = 1;
                break;
            }
        }
        cout << ok << endl;
    }
    return 0;
}