#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool cmp(pair<string, int> a, pair<string, int> b) {
    string s = a.first;
    string t = b.first;
    if (s.length() == t.length()) return s > t;
    return s.length() > t.length();
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    map<string, int> mp;
    while (cin >> s) {
        string tmp = s;
        reverse(tmp.begin(), tmp.end());
        if (s.length() > 1 && tmp == s) {
            mp[s]++;
        }
    }
    vector<pair<string, int>> res;
    for (pair<string, int> x : mp) {
        res.push_back({ x.first,x.second });
    }
    sort(res.begin(), res.end(), cmp);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i].first << " " << res[i].second << endl;
    }
    return 0;
}