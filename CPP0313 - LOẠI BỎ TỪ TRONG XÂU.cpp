#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    string s; getline(cin, s);
    string t; cin >> t;
    stringstream ss(s);
    string token;
    while (ss >> token) {
        if (token != t) cout << token << " ";
    }
    return 0;
}
