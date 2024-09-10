#include<bits/stdc++.h>

#define AnhLM027 "Le Minh Anh"

using namespace std;
int a[1000];
int n, k;

void in(int a[]) {
	for (int i = 1; i <= n; i++) cout << a[i];
	cout << " ";
}

void Try(int i) {
	for (int j = 0; j <= 1; j++) {
		a[i] = j;
		if (i == n + 1) {
			in(a);
			return;
		}
		else Try(i + 1);
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}