#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int te; cin >> te;
    while (te--)
    {
        string s, t; cin >> s >> t;
        string s1 = s, s2 = s;
        string t1 = t, t2 = t;
        int l1 = s.length(), l2 = t.length();
        for (int i = 0; i < l1; i++) if (s1[i] == '5') s1[i] = '6';
        for (int i = 0; i < l1; i++) if (s2[i] == '6') s2[i] = '5';
        for (int i = 0; i < l2; i++) if (t1[i] == '5') t1[i] = '6';
        for (int i = 0; i < l2; i++) if (t2[i] == '6') t2[i] = '5';
        ll sum_max = stoll(s1) + stoll(t1);
        ll sum_min = stoll(s2) + stoll(t2);
        cout << sum_min << " " << sum_max << endl;
    }
    return 0;
}