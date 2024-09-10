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
	friend istream& operator>>(istream& in, SinhVien& a) {
		getline(in, a.name);
		in >> a.lop;
		cin >> a.ns;
		if (a.ns[1] == '/') a.ns = '0' + a.ns;
		if (a.ns[4] == '/') a.ns.insert(3, "0");
		in >> a.gpa;
		return in;
	}
	friend ostream& operator<<(ostream& out, const SinhVien& a) {
		out << a.ma << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
		return out;
	}
};

int main() {
	SinhVien a;
	cin >> a;
	cout << a;
	return 0;
}