#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


struct TG
{
    int gio, phut, giay;
};

void nhap(TG ds[], int n) {
    for (int i = 1; i <= n; i++) {
        cin >> ds[i].gio >> ds[i].phut >> ds[i].giay;
    }
}

bool cmp(TG a, TG b) {
    if (a.gio == b.gio && a.phut == b.phut) return a.giay < b.giay;
    else if (a.gio == b.gio) return a.phut < b.phut;
    return a.gio < b.gio;
}

void sapxep(TG ds[], int n) {
    sort(ds + 1, ds + n + 1, cmp);
}

void in(TG ds[], int n) {
    for (int i = 1; i <= n; i++) {
        cout << ds[i].gio << " " << ds[i].phut << " " << ds[i].giay << endl;
    }
}

int main() {
    TG ds[5001];
    int n; cin >> n;
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
    return 0;
}