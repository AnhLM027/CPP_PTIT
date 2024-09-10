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
        int cnt = 0;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                if (i % 2 == 0) cnt++;
                if (i % 2 == 0 && i * i == n) cnt--;
                if ((n / i) % 2 == 0) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
