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
        sort(a.begin(), a.end());
        int l = 0, r = n - 1;
        while (l < r) {
            cout << a[r] << " "; r--;
            cout << a[l] << " "; l++;
        }
        if (n % 2 == 1) cout << a[l];
        cout << endl;
    }
    return 0;
}