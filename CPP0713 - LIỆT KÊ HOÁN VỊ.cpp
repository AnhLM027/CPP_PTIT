#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int a[100], b[100];
int n;
bool check[1000] = { false };

void in(int b[]) {
    for (int i = 0; i < n; i++) cout << a[b[i]];
    cout << " ";
}

void Try(int i) {
    for (int j = 0; j < n; j++) {
        if (!check[j]) {
            b[i] = j;
            if (i == n - 1) in(b);
            check[j] = 1;
            Try(i + 1);
            check[j] = 0;
        }

    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) a[i] = i + 1;
        sort(a, a + n);
        Try(0);
        cout << endl;
    }

    return 0;
}