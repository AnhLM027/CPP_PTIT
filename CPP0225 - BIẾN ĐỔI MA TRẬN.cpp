#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


#define AnhLM027 "Le Minh Anh"


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        int sum = 0;
        int hang[105] = { 0 }, cot[105] = { 0 };
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                sum += a[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                hang[i] += a[i][j];
                cot[i] += a[j][i];
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (res < hang[i]) res = hang[i];
            if (res < cot[i]) res = cot[i];
        }
        cout << res * n - sum << endl;
    }
    return 0;
}