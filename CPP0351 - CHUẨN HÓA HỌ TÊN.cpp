#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s;
        cin.ignore();
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
        stringstream ss(s); string token;
        vector<string> tmp;
        while (ss >> token) {
            token[0] = toupper(token[0]);
            tmp.push_back(token);
        }
        if (n == 1) {
            int l = tmp.size();
            cout << tmp[l - 1] << " ";
            for (int i = 0; i < l - 1; i++) {
                cout << tmp[i] << " ";
            }
        }
        else {
            int l = tmp.size();
            for (int i = 1; i < l; i++) {
                cout << tmp[i] << " ";
            }
            cout << tmp[0];
        }
        cout << endl;
    }
    return 0;
}