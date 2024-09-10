#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int te; cin >> te;
    cin.ignore();
    while (te--)
    {
        string s, t;
        getline(cin, s);
        getline(cin, t);
        stringstream s1(s), s2(t);
        string token;
        set<string> se;
        while (s1 >> token) se.insert(token);
        while (s2 >> token) {
            if (se.count(token)) se.erase(token);
        }
        for (string s : se) {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}