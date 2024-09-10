#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
	int t; cin >> t;
	while (t--) {
		char x; cin >> x;
		if (x != (char)tolower(x)) cout << (char)tolower(x);
		else cout << (char)toupper(x);
		cout << endl;
	}
}
