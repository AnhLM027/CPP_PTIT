#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            mp[b[i]]++;
        }
        for (pair<int, int> x : mp) {
            if (x.second >= 1) cout << x.first << " ";
        }
        cout << endl;
        for (pair<int, int> x : mp) {
            if (x.second > 1) cout << x.first << " ";
        }
        cout << endl;
    }
    return 0;
}