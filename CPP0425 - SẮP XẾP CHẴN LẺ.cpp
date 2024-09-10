#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int cnt = 0;
        vector<int> b(n);
        for (int i = 0; i < n; i += 2) b[i] = a[cnt++];
        for (int i = 1; i < n; i += 2) b[i] = a[cnt++];
        for (int i = 0; i < b.size(); i++) cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}