#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int cnt = 1;

struct NhanVien {
	string name, gt, ns, dc, mst, khd;
	string ma;
};

void nhap(NhanVien& a) {
	cin.ignore();
	a.ma = to_string(cnt++);
	while (a.ma.length() < 5) a.ma = "0" + a.ma;
	getline(cin, a.name);
	cin >> a.gt >> a.ns;
	if (a.ns[1] == '/') a.ns = '0' + a.ns;
	if (a.ns[4] == '/') a.ns.insert(3, "0");
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.khd;
	if (a.khd[1] == '/') a.khd = '0' + a.khd;
	if (a.khd[4] == '/') a.khd.insert(3, "0");
}

void inds(NhanVien a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i].ma << " " << a[i].name << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].khd << endl;
	}
}

int main() {
	struct NhanVien ds[50];
	int N, i;
	cin >> N;
	for (i = 0; i < N; i++) nhap(ds[i]);
	inds(ds, N);
	return 0;
}