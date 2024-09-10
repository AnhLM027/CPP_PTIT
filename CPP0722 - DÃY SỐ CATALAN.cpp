#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


string operator*(string s, int b) {
    if (s == "0" || b == 0) return "0";
    int n = s.length();
    string res(n, '0');
    int nho = 0;
    for (int i = n - 1; i >= 0; i--) {
        int sum = (s[i] - '0') * b + nho;
        res[i] = sum % 10 + '0';
        nho = sum / 10;
    }
    if (nho) res = to_string(nho) + res;
    return res;
}

int ucln(int a, int b) {
    while (a != 0) {
        int x = a; a = b % a; b = x;
    }
    return b;
}

string solve(int n) {
    vector<int> a;
    for (int i = n + 2; i <= 2 * n; i++) a.push_back(i);
    for (int i = 2; i <= n; i++) {
        int x = i;
        for (int j = 0; j < a.size(); j++) {
            if (x == 1) break;
            int k = ucln(x, a[j]);
            a[j] /= k;
            x /= k;
        }
    }
    string ans = "1";
    for (int i = 0; i < a.size(); i++) ans = ans * a[i];
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short int n; cin >> n;
    cout << solve(n + 1) << endl;
    return 0;
}