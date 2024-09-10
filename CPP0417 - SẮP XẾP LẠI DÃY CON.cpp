#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int x = -1;
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && a[i] > a[i + 1]) {
            x = i;
            break;
        }
    }
    int y = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (i - 1 >= 0 && a[i - 1] > a[i]) {
            y = i;
            break;
        }
    }
    int Min = *min_element(a.begin() + x, a.begin() + y + 1);
    int Max = *max_element(a.begin() + x, a.begin() + y + 1);
    int ind1 = x, ind2 = y;
    //cout << x << " " << y << endl;
    for (int i = y; i < n; i++) {
        if (a[i] < Max) ind1 = i;
    }
    for (int i = x; i >= 0; i--) {
        if (a[i] > Min) ind2 = i;
    }
    cout << ind2 + 1 << " " << ind1 + 1 << endl;
}

int main() {
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}