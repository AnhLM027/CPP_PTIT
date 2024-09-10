#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    int n; cin >> n;
    set<int> se;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        se.insert(x);
    }
    for (int x : se) cout << x << " ";
    return 0;
}
