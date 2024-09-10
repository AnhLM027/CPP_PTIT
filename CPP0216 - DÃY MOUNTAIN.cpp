#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int ok = 1;
        int l, r; cin >> l >> r;
        while (l < r) {
            int l1 = l, r1 = r;
            if (a[l] <= a[l + 1]) l++;
            if (l == r) break;
            if (a[r - 1] >= a[r]) r--;
            if (l == r) break;
            if (l1 == l && r1 == r) {
                ok = 0;
                break;
            }
        }
        if (ok) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}