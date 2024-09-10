#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
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
	while (a != 0) {
		ll tmp = a; a = b % a; b = tmp;
	}
	return b;
}

void rutgon(PhanSo& a) {
	ll uc = ucln(a.a, a.b);
	a.a /= uc;
	a.b /= uc;
}

void in(PhanSo a) {
	cout << a.a << "/" << a.b << endl;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}