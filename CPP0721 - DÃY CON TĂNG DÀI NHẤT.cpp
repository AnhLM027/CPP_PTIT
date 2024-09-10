#include<bits/stdc++.h>
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
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            auto it = lower_bound(ans.begin(), ans.end(), a[i]);
            if (it == ans.end()) {
                ans.push_back(a[i]);
            }
            else *it = a[i];
        }
        cout << ans.size() << endl;
    }
}
