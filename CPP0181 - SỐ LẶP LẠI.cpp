#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

ll ucln(ll a, ll b) {
    while (a != 0) {
        ll x = a; a = b % a; b = x;
    }
    return b;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        ll x, y; cin >> x >> y;
        int lap = ucln(x, y);
        while (lap) {
            cout << s; lap--;
        }
        cout << endl;
    }
    return 0;
}
