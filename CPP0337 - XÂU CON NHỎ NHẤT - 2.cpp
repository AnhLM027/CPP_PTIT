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
        string s; cin >> s;
        map<char, int> a;
        for (int i = 0; i < s.length(); i++) {
            a[s[i]]++;
        }
        int len = a.size();
        int dem[256] = { 0 };
        int cnt = 0, left = 0, len_min = INT_MAX;
        for (int i = 0; i < s.length(); i++) {
            dem[s[i]]++;
            if (dem[s[i]] == 1) cnt++;
            if (cnt == len) {
                while (dem[s[left]] > 1) {
                    dem[s[left]]--;
                    left++;
                }
                len_min = min(len_min, i - left + 1);
            }
        }
        cout << len_min << endl;
    }
    return 0;
}
