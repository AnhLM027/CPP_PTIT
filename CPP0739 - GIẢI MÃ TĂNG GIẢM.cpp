#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	run();
	int t; cin >> t;
	while (t--)
	{
		int cnt = 2;
		string s; cin >> s;
		stack<int> st;
		st.push(1);
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'D') {
				st.push(cnt);
				cnt++;
			}
			else if (s[i] == 'I') {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				st.push(cnt++);
			}
		}
		while (!st.empty()) {
			cout << st.top(); st.pop();
		}
		cout << endl;
	}
	return 0;
}