#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        int cnt = 0;
        for (int i = n; i <= m; i++) {
            if (i % a == 0 || i % b == 0) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
