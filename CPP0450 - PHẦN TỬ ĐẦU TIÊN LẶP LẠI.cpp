#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"
int a[1000005];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int te; cin >> te;
    while (te--) {
        int cnt[1000005] = {};
        int n; cin >> n;
        bool check = 0;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
            if (!check && cnt[a[i]] == 2) {
                ans = a[i];
                check = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}