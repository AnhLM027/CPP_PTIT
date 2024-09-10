#include<bits/stdc++.h>
using namespace std;

#define AnhLM027 "Le Minh Anh"


int a[1000];
int n, k;
bool check[1000];

void in(int a[]) {
	for (int i = 1; i <= k; i++) cout << a[i];
	cout << " ";
}

void Try(int i, int st) {
	for (int j = st; j <= n + 1; j++) {
		a[i] = j;
		if (i == k + 1) {
			in(a);
			return;
		}
		else Try(i + 1, j + 1);
	}
}

int main() {
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		Try(1, 1);
		cout << endl;
	}
	return 0;
}