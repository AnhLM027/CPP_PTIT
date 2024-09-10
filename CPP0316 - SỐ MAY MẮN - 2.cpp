#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


string sum(string n) {
    if (n.length() == 1) return n;
    ll tmp = 0;
    for (int i = 0; i < n.length(); i++) {
        tmp += n[i] - '0';
    }
    return sum(to_string(tmp));
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        string n; cin >> n;
        if (sum(n) == "9") cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}