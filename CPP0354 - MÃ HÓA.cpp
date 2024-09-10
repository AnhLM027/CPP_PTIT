#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
	int te; cin >> te;
	while (te--) {
		string s; cin >> s;
		string tmp = "";
		for (int i = 0; i < s.length(); i++) {
			tmp += s[i];
			int j = i;
			while (j + 1 < s.length() && s[j + 1] == s[j]) j++;
			tmp += to_string(j - i + 1);
			i = j;
		}
		cout << tmp << endl;
	}
	return 0;
}