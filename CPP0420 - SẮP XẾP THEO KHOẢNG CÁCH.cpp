#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int x;
int cmp(pair<int, int> a, pair<int, int> b) {
    if (abs(a.first - x) == abs(b.first - x)) return a.second < b.second;
    return abs(a.first - x) < abs(b.first - x);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n >> x;
        vector<pair<int, int>> a;
        for (int i = 0; i < n; i++) {
            int tmp; cin >> tmp;
            a.push_back({ tmp,i });
        }
        sort(a.begin(), a.end(), cmp);
        for (int i = 0; i < n; i++) {
            cout << a[i].first << " ";
        }
        cout << endl;
    }
    return 0;
}