#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


string sum(string a, string b) {
    int l1 = a.length();
    int l2 = b.length();
    int l_max = l1 > l2 ? l1 : l2;
    string tmp(l_max, '0');
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int nho = 0;
    for (int i = 0; i < l_max; i++) {
        int x = i < l1 ? a[i] - '0' : 0;
        int y = i < l2 ? b[i] - '0' : 0;
        int sum = x + y + nho;
        tmp[i] = (sum % 10) + '0';
        nho = sum / 10;
    }
    if (nho > 0) tmp.push_back(nho + '0');
    reverse(tmp.begin(), tmp.end());
    return tmp;
}

bool check(string s, int l, int len1, int len2) {
    string s1 = s.substr(l, len1);
    string s2 = s.substr(l + len1, len2);
    string s3 = sum(s1, s2);
    if (s3.length() > s.length() - l - s1.length() - s2.length()) return false;
    if (s3 == s.substr(l + len1 + len2, s3.length())) {
        if (s.length() == l + len1 + len2 + s3.length()) {
            return true;
        }
        return check(s, l + len1, len2, s3.length());
    }
    return false;
}

void solve() {
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i++) {
        for (int j = 1; j < s.length() - i; j++) {
            if (check(s, 0, i, j)) {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}
