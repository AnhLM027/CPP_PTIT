#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    cin.ignore();
    unordered_map<string, int> se;
    while (t--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
        stringstream ss(s); string token;
        vector<string> tmp;
        while (ss >> token) tmp.push_back(token);
        int l = tmp.size();
        string res = "";
        res += tmp[l - 1];
        for (int i = 0; i < l - 1; i++) res += tmp[i][0];
        if (se.count(res)) {
            se[res]++;
            res += se[res] + '0';
        }
        else se[res] = 1;
        cout << res + "@ptit.edu.vn" << endl;
    }
    return 0;
}