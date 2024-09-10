#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i < n) {
            for (int j = 1; j < 2 * n; j++) {
                if (j == n - i + 1 || j == n + i - 1) cout << "*";
                else cout << " ";
            }
        }
        if (i == n) {
            for (int j = 1; j < 2 * n; j++) {
                if (j & 1) cout << "*";
                else cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}