#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	string s;
	vector<string> res;
	while (cin >> s) {
		for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
		res.push_back(s);
	}
	string tmp = "";
	for (int i = 0; i < res.size(); i++) tmp += res[i] + " ";
	for (int i = 0; i < tmp.length(); i++) {
		if (i == 0) tmp[i] = toupper(tmp[i]);
		else if (i >= 1 && i + 1 < tmp.length() && (tmp[i - 1] == '.' || tmp[i - 1] == '?' || tmp[i - 1] == '!')) {
			tmp[i] = '\n';
			tmp[i + 1] = toupper(tmp[i + 1]);
		}
		else if (tmp[i] == '.' || tmp[i] == '?' || tmp[i] == '!') {
			continue;
		}
		cout << tmp[i];
	}
	return 0;
}