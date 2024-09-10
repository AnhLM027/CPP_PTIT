#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int te; cin >> te;
    cin.ignore();
    while (te--) {
        string s; getline(cin, s);
        stringstream ss(s);
        string token;
        stack<string> st;
        while (ss >> token) st.push(token);
        while (!st.empty()) {
            cout << st.top() << " "; st.pop();
        }
        cout << endl;
    }
    return 0;
}