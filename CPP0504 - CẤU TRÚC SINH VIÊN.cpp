#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;
#define AnhLM027 "Le Minh Anh"

struct SinhVien {
	string name, lop, ns;
	double gpa;
};

void nhap(SinhVien& a) {
	getline(cin, a.name);
	cin >> a.lop >> a.ns >> a.gpa;
	if (a.ns[1] == '/') a.ns = '0' + a.ns;
	if (a.ns[4] == '/') a.ns.insert(3, "0");
}

void in(SinhVien a) {
	cout << "B20DCCN001 " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
}

int main() {
	struct SinhVien a;
	nhap(a);
	in(a);
	return 0;
}