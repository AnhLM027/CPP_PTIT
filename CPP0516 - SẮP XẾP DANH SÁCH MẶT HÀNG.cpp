#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


struct MH {
    int cnt;
    string name, nhom;
    double mua, ban;
    double ln;
};

void nhap(MH& ds) {
    cin.ignore();
    getline(cin, ds.name);
    getline(cin, ds.nhom);
    cin >> ds.mua >> ds.ban;
    ds.ln = ds.ban - ds.mua;
}

bool cmp(MH a, MH b) {
    return a.ln > b.ln;
}

void sap_xep(MH ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in_ds(MH ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ds[i].cnt << " " << ds[i].name << " " << ds[i].nhom << " " << fixed << setprecision(2) << ds[i].ln << endl;
    }
}

int main() {
    MH a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i].cnt = i + 1;
        nhap(a[i]);
    }
    sap_xep(a, n);
    in_ds(a, n);
    return 0;
}