#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

struct PhanSo {
	ll a, b;
};

void nhap(PhanSo& a) {
	cin >> a.a >> a.b;
}

ll ucln(ll a, ll b) {
	while (a != 0)
	{
		ll tmp = a; a = b % a;
		b = tmp;
	}
	return b;
}

void rutgon(PhanSo& a) {
	ll uc = ucln(a.a, a.b);
	a.a /= uc;
	a.b /= uc;
}

PhanSo tong(PhanSo a, PhanSo b) {
	PhanSo tmp;
	rutgon(a); rutgon(b);
	ll tmp1 = a.a * b.b + a.b * b.a;
	ll tmp2 = a.b * b.b;
	tmp.a = tmp1; tmp.b = tmp2;
	rutgon(tmp);
	return tmp;
}

void in(PhanSo a) {
	cout << a.a << "/" << a.b << endl;
}

int main() {
	struct PhanSo p, q;
	nhap(p); nhap(q);
	PhanSo t = tong(p, q);
	in(t);
	return 0;
}