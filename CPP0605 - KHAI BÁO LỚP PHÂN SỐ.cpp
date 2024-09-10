#include <bits/stdc++.h>
#define MAXN 20000005
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

class PhanSo {
private:
	ll tu, mau;
public:
	PhanSo(ll tu, ll mau) {
		this->tu = tu;
		this->mau = mau;
	}
	friend istream& operator>>(istream& in, PhanSo& a) {
		in >> a.tu;
		in >> a.mau;
		return in;
	}
	friend ostream& operator<<(ostream& out, const PhanSo& a) {
		out << a.tu << "/" << a.mau;
		return out;
	}
	void rutgon();
};

ll ucln(ll a, ll b) {
	while (a != 0) {
		ll tmp = a;
		a = b % a;
		b = tmp;
	}
	return b;
}

void PhanSo::rutgon() {
	ll tmp = ucln(tu, mau);
	tu = tu / tmp;
	mau = mau / tmp;
}

int main() {
	PhanSo p(1, 1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}