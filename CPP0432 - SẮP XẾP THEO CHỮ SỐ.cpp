#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool noi(string a, string b) {
    return a + b > b + a;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<string> res(n);
        for (int i = 0; i < n; i++) cin >> res[i];
        sort(res.begin(), res.end(), noi);
        for (int i = 0; i < n; i++) cout << res[i];
        cout << endl;
    }
    return 0;
}