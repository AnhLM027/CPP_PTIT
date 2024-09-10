#include <bits/stdc++.h>
#define MAXN 20000005
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;


typedef long long ll;

#define AnhLM027 "Le Minh Anh"

class SinhVien {
private:
	string ma, name, lop, ns;
	double gpa;
public:
	SinhVien() {
		ma = "B20DCCN001";
		name = "";
		lop = "";
		ns = "";
		gpa = 0;
	}
	void nhap();
	void xuat();
};

void SinhVien::nhap() {
	getline(cin, name);
	cin >> lop;
	cin >> ns;
	if (ns[1] == '/') ns = '0' + ns;
	if (ns[4] == '/') ns.insert(3, "0");
	cin >> gpa;
}

void SinhVien::xuat() {
	cout << ma << " " << name << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa;
}

int main() {
	SinhVien a;
	a.nhap();
	a.xuat();
	return 0;
}