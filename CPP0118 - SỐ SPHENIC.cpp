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
        int cnt = 0, i = 2, ok = 1;
        while (n > 1) {
            if (n % i == 0) {
                cnt++;
                int cnt2 = 0;
                while (n % i == 0) {
                    n /= i;
                    cnt2++;
                    if (cnt2 > 1) break;
                }
                if (cnt2 > 1 || cnt > 3) {
                    ok = 0;
                    break;
                }
            }
            i++;
        }
        if (ok && cnt == 3) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}