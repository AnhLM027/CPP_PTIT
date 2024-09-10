#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


struct PhanSo {
	ll tu, mau;
};

ll ucln(ll a, ll b) {
	while (a != 0) {
		ll x = a; a = b % a; b = x;
	}
	return b;
}

void process(PhanSo a, PhanSo b) {
	ll x = a.tu * b.mau + b.tu * a.mau;
	ll y = a.mau * b.mau;
	x *= x;
	y *= y;
	ll tmp = ucln(x, y);
	x /= tmp;
	y /= tmp;
	cout << x << "/" << y << " ";
	ll x1 = a.tu * b.tu * x;
	ll y1 = a.mau * b.mau * y;
	ll uc = ucln(abs(x1), abs(y1));
	if (y1 < 0 && x1>0) {
		y1 = -y1;
		x1 = -x1;
	}
	cout << x1 / uc << "/" << y1 / uc << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}