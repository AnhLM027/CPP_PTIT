#include <bits/stdc++.h>
#define MAXN 20000005
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

void xuly(string& s) {
	for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
	stringstream ss(s);
	string token;
	vector<string> res;
	while (ss >> token) res.push_back(token);
	s = "";
	for (int i = 0; i < res.size(); i++) {
		res[i][0] = toupper(res[i][0]);
		s += res[i];
		if (i != res.size() - 1) s += " ";
	}
}

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
		xuly(a.name);
		in >> a.lop;
		string tmp; in >> tmp;
		if (tmp[1] == '/') tmp = '0' + tmp;
		if (tmp[4] == '/') tmp.insert(3, "0");
		a.ns = tmp;
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