#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


struct SinhVien
{
    string msv;
    string name;
    string lop;
    double m1, m2, m3;
};


void nhap(SinhVien& ds) {
    scanf("\n");
    cin >> ds.msv;
    scanf("\n");
    getline(cin, ds.name);
    cin >> ds.lop;
    cin >> ds.m1 >> ds.m2 >> ds.m3;
}

bool cmp(SinhVien a, SinhVien b) {
    return a.name < b.name;
}

void sap_xep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in_ds(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << ds[i].msv << " " << ds[i].name << " " << ds[i].lop << " " << fixed << setprecision(1)
            << ds[i].m1 << " " << ds[i].m2 << " " << ds[i].m3 << endl;
    }
}

int main() {
    int n;
    cin >> n;
    struct SinhVien* ds = new SinhVien[n];
    for (int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}