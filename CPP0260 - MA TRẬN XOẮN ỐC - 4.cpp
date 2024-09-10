#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[100][100];
    vector<int> tmp(n * n);
    for (int i = 0; i < n * n; i++) cin >> tmp[i];
    sort(tmp.begin(), tmp.end());
    int h1 = 0, h2 = n - 1;
    int c1 = 0, c2 = n - 1;
    int cnt = 0;
    while (h1 <= h2 && c1 <= c2) {
        for (int i = c1; i <= c2; i++) a[h1][i] = tmp[cnt++];
        h1++;
        for (int i = h1; i <= h2; i++) a[i][c2] = tmp[cnt++];
        c2--;
        for (int i = c2; i >= c1; i--) a[h2][i] = tmp[cnt++];
        h2--;
        for (int i = h2; i >= h1; i--) a[i][c1] = tmp[cnt++];
        c1++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}