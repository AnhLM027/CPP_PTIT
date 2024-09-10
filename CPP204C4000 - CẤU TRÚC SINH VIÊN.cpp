#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

struct SinhVien {
    string name;
    string lop;
    string ns;
    double diem;
};

void nhapThongTinSV(SinhVien& a) {
    getline(cin, a.name);
    cin >> a.lop >> a.ns >> a.diem;
    if (a.ns[1] == '/') {
        a.ns.insert(0, "0");
    }
    if (a.ns[4] == '/') {
        a.ns.insert(3, "0");
    }
}

void inThongTinSV(SinhVien a) {
    cout << "N20DCCN001 " << a.name << " " << a.lop << " " << a.ns << " " << setprecision(2) << fixed << a.diem;
}

int main() {
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}