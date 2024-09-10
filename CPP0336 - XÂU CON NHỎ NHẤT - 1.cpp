#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s, t; cin >> s >> t;
        int l = s.length();
        int dem1[256] = { 0 }, dem2[256] = { 0 };
        for (int i = 0; i < t.length(); i++) {
            dem2[t[i]]++;
        }
        int cnt = 0, left = 0, index = -1, len_max = 1e9;
        for (int i = 0; i < s.length(); i++)
        {
            dem1[s[i]]++;
            if (dem1[s[i]] <= dem2[s[i]]) cnt++;
            if (cnt == t.length()) {
                while (dem1[s[left]] > dem2[s[left]] || dem2[s[left]] == 0) {
                    if (dem1[s[left]] > dem2[s[left]]) {
                        dem1[s[left]]--;
                    }
                    left++;

                }
                if (len_max > i - left + 1) {
                    len_max = i - left + 1;
                    index = left;
                }
            }

        }
        if (index == -1) cout << "-1" << endl;
        else cout << s.substr(index, len_max) << endl;
    }
    return 0;
}