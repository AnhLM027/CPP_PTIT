#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

struct NhanVien {
	string name, gt, ns, dc, mst, khd;
};

void nhap(NhanVien& a) {
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

void in(NhanVien a) {
	cout << "00001 " << a.name << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.khd;
}

int main() {
	struct NhanVien a;
	nhap(a);
	in(a);
	return 0;
}