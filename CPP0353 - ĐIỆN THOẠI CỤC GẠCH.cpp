#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int number[8] = { 2,3,4,5,6,7,8,9 };
string chu[8] = { "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        string tmp = "";
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
            int ok = 1;
            for (int j = 0; j <= 7; j++) {
                if (!ok) break;
                for (int k = 0; k < chu[j].length(); k++) {
                    if (s[i] == chu[j][k]) {
                        tmp += number[j] + '0';
                        ok = 0;
                        break;
                    }
                }
            }
        }
        string check = tmp;
        reverse(check.begin(), check.end());
        if (check == tmp) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}