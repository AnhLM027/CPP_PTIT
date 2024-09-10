#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PI 3.141592653589793238

#define AnhLM027 "Le Minh Anh"


struct toado
{
	double x, y;
};

double canh(double a1, double a2, double b1, double b2) {
	return sqrt((a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2));
}

double dt(double a, double b, double c) {
	return sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b));
}

bool check(double  a, double b, double c) {
	if (a + b <= c || a + c <= b || b + c <= a) return false;
	return true;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		toado a, b, c;
		cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
		double ab = canh(a.x, a.y, b.x, b.y);
		double bc = canh(b.x, b.y, c.x, c.y);
		double ac = canh(a.x, a.y, c.x, c.y);
		if (!check(ab, bc, ac)) cout << "INVALID\n";
		else {
			double S = 1.0 * dt(ab, bc, ac) / 4;
			double R = (double)ab * bc * ac / (4 * S);
			double S2 = PI * R * R;
			cout << fixed << setprecision(3) << S2 << endl;
		}
	}
}