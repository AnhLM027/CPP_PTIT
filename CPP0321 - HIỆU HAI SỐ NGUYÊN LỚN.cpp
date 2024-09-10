#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


string tong(string s, string t) {
    int l1 = s.length();
    int l2 = t.length();
    int l_max = l1 > l2 ? l1 : l2;
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    string res;
    int carry = 0;
    for (int i = 0; i < l_max; i++) {
        int a = i < l1 ? s[i] - '0' : 0;
        int b = i < l2 ? t[i] - '0' : 0;
        int hieu = a - b - carry;
        if (hieu < 0) {
            hieu += 10;
            carry = 1;
        }
        else carry = 0;
        res += hieu + '0';
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        if (s.length() < t.length() || (s.length() == t.length() && s < t)) {
            swap(s, t);
        }
        cout << tong(s, t) << endl;
    }
    return 0;
}