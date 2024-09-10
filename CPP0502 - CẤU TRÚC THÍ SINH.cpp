#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;
#define AnhLM027 "Le Minh Anh"

struct ThiSinh {
	string name, ns;
	double m1, m2, m3;
};

void nhap(ThiSinh& a) {
	getline(cin, a.name);
	cin >> a.ns >> a.m1 >> a.m2 >> a.m3;
}

void in(ThiSinh a) {
	cout << a.name << " " << a.ns << " " << fixed << setprecision(1) << a.m1 + a.m2 + a.m3;
}

int main() {
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}