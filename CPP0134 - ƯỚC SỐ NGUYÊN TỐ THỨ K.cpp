#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> a;
        int i = 2;
        while (i <= sqrt(n)) {
            if (n % i == 0) {
                while (n % i == 0) {
                    n /= i;
                    a.push_back(i);
                }
            }
            else i++;
        }
        if (n > 1) a.push_back(n);
        if (k <= a.size()) cout << a[k - 1] << endl;
        else cout << "-1" << endl;
    }
}
