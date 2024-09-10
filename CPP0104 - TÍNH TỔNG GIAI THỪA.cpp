#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll tich = 1;
    ll sum = 1;
    for (int i = 2; i <= n; i++) {
        tich *= i;
        sum += tich;
    }
    cout << sum << endl;
    return 0;
}