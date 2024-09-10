#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


struct SinhVien
{
    string name;
    string ns;
};

void nhap(SinhVien ds[], int n) {
    for (int i = 1; i <= n; i++) {
        cin >> ds[i].name >> ds[i].ns;
        if (ds[i].ns[1] == '/') ds[i].ns = '0' + ds[i].ns;
        if (ds[i].ns[4] == '/') ds[i].ns.insert(3, "0");
    }
}

bool cmp(SinhVien a, SinhVien b) {
    int ns1 = stoi(a.ns.substr(6, 4));
    int ns2 = stoi(b.ns.substr(6, 4));
    int ts1 = stoi(a.ns.substr(3, 2));
    int ts2 = stoi(b.ns.substr(3, 2));
    int ngs1 = stoi(a.ns.substr(0, 2));
    int ngs2 = stoi(b.ns.substr(0, 2));
    if (ns1 == ns2 && ts1 == ts2) return ngs1 < ngs2;
    else if (ns1 == ns2) return ts1 < ts2;
    return ns1 < ns2;
}
void sapxep(SinhVien ds[], int n) {
    sort(ds + 1, ds + n + 1, cmp);
}
void in(SinhVien ds[], int n) {
    cout << ds[n].name << "\n" << ds[1].name;
}

int main() {
    SinhVien ds[50];
    int n; cin >> n;
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
    return 0;
}