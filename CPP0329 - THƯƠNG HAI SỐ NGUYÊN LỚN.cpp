#include <bits/stdc++.h>
using namespace std;

#define rev(s) reverse(s.begin(),s.end())

#define AnhLM027 "Le Minh Anh"


string Hieu(string s, string t) {
    int l1 = s.length(), l2 = t.length();
    rev(s); rev(t);
    string res;
    int carry = 0;
    for (int i = 0; i < l1 || i < l2; i++) {
        int a = i < l1 ? s[i] - '0' : 0;
        int b = i < l2 ? t[i] - '0' : 0;
        int hieu = a - b - carry;
        if (hieu < 0) { hieu += 10; carry = 1; }
        else carry = 0;
        res += hieu + '0';
    }
    while (res.size() > 1 && res.back() == '0') res.pop_back();
    rev(res); rev(t);
    return res.empty() ? "0" : res;
}

bool cmp(string a, string b) {
    if (a.length() == b.length()) return a >= b;
    return a.length() > b.length();
}

string LongDiv(string s, string t) {
    int l1 = s.length(), l2 = t.length();
    if (l1 < l2 || (l1 == l2 && s < t)) return "0";
    string res = "", tmp = "";
    for (char x : s) {
        tmp += x;
        int cnt = 0;
        while (tmp.size() > 1 && tmp[0] == '0') tmp.erase(0, 1);
        while (cmp(tmp, t)) {
            tmp = Hieu(tmp, t);
            cnt++;
        }
        res += (cnt + '0');
    }
    while (res.size() > 1 && res[0] == '0') res.erase(0, 1);
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        string a, b; cin >> a >> b;
        string dau;
        if ((a[0] == '-' && b[0] != '-') || (a[0] != '-' && b[0] == '-')) {
            dau = "-";
            if (a[0] == '-') a.erase(0, 1);
            if (b[0] == '-') b.erase(0, 1);
        }
        else if (a[0] == '-' && b[0] == '-') {
            a.erase(0, 1);
            b.erase(0, 1);
        }
        string res = LongDiv(a, b);
        cout << dau + res << endl;
    }
    return 0;
}