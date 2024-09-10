#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }
        int cnt = 0;
        for (pair<int, int> tmp : mp) {
            int a = tmp.first, b = tmp.second;
            if (k - a != a && mp.count(k - a)) {
                int a2 = mp[k - a];
                cnt += b * a2;
            }
            else if (k - a == a && mp.count(k - a)) cnt += b * (b - 1) / 2;
            mp[a] = 0;
            //cout << a << " " << b << endl;
        }
        cout << cnt << endl;
    }
    return 0;
}