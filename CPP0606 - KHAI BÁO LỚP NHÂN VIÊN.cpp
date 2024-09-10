#include <bits/stdc++.h>
#define MAXN 20000005
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

class NhanVien {
private:
	string ma, name, gt, ns, dc, mst, khd;
public:
	NhanVien() {
		static int cnt = 1;
		ma = to_string(cnt);
		while (ma.length() < 5) ma = '0' + ma;
	}
	friend istream& operator>>(istream& in, NhanVien& a) {
		getline(in, a.name);
		getline(in, a.gt);
		getline(in, a.ns);
		if (a.ns[1] == '/') a.ns = '0' + a.ns;
		if (a.ns[4] == '/') a.ns.insert(3, "0");
		getline(in, a.dc);
		getline(in, a.mst);
		getline(in, a.khd);
		return in;
	}
	friend ostream& operator>>(ostream& out, const NhanVien& a) {
		out << a.ma << " " << a.name << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.khd;
		return out;
	}
};

int main() {
	NhanVien a;
	cin >> a;
	cout >> a;
	return 0;
}