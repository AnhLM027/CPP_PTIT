#include <bits/stdc++.h>
#define MAXN 20000005
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

ll ucln(ll a, ll b) {
	while (a != 0) {
		ll tmp = a;
		a = b % a;
		b = tmp;
	}
	return b;
}

class PhanSo {
private:
	ll tu, mau;
public:
	PhanSo(ll tu, ll mau) {
		this->tu = tu;
		this->mau = mau;
	}
	friend istream& operator>>(istream& in, PhanSo& a) {
		in >> a.tu >> a.mau;
		return in;
	}
	friend ostream& operator<<(ostream& out, const PhanSo& a) {
		out << a.tu << "/" << a.mau;
		return out;
	}
	friend PhanSo operator + (PhanSo& a, PhanSo& b) {
		ll tmp1 = ucln(a.tu, a.mau);
		a.tu /= tmp1; a.mau /= tmp1;
		ll tmp2 = ucln(b.tu, b.mau);
		b.tu /= tmp2; b.mau /= tmp2;
		ll tu1 = a.tu * b.mau + a.mau * b.tu;
		ll mau1 = a.mau * b.mau;
		ll uc = ucln(tu1, mau1);
		tu1 /= uc; mau1 /= uc;
		a.tu = tu1; a.mau = mau1;
		return a;
	}

};

int main() {
	PhanSo p(1, 1), q(1, 1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}