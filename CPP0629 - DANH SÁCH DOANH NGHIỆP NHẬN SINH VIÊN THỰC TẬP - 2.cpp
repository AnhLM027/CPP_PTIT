#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


struct SinhVien
{
    string ma = "";
    string dn = "";
    int cnt;
    friend istream& operator >> (istream& in, SinhVien& sv) {
        in >> sv.ma;
        in.ignore();
        getline(in, sv.dn);
        cin >> sv.cnt;
        return in;
    }
    friend ostream& operator << (ostream& out, const SinhVien& sv) {
        out << sv.ma << " " << sv.dn << " " << sv.cnt << endl;
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    if (a.cnt == b.cnt) return a.ma < b.ma;
    return a.cnt > b.cnt;
}

void sapxep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

int main() {
    SinhVien ds[1005];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> ds[i];
    }
    sapxep(ds, N);
    int t; cin >> t;
    while (t--)
    {
        int l, r; cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:\n";
        for (int i = 0; i < N; i++)
        {
            if (ds[i].cnt >= l && ds[i].cnt <= r) cout << ds[i];
        }
    }
    return 0;
}