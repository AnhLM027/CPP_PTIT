#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int l = 0, r = n - 1;
        int sum_l = a[l], sum_r = a[r];
        int cnt = 0;
        while (l < r) {
            if (sum_l < sum_r) {
                l++;
                sum_l += a[l];
                cnt++;
            }
            else if (sum_l > sum_r) {
                r--;
                sum_r += a[r];
                cnt++;
            }
            else {
                l++, r--;
                sum_l = a[l]; sum_r = a[r];
            }
        }
        cout << cnt << endl;
    }
    return 0;
}