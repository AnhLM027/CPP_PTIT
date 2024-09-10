#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


struct SinhVien
{
    string msv = "";
    string name = "";
    string lop = "";
    string email = "";
    friend istream& operator >> (istream& in, SinhVien& sv) {
        in >> sv.msv;
        in.ignore();
        getline(in, sv.name);
        in >> sv.lop >> sv.email;
        return in;
    }
    friend ostream& operator << (ostream& out, const SinhVien& sv) {
        out << sv.msv << " " << sv.name << " " << sv.lop << " " << sv.email << endl;
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    if (a.lop == b.lop) return a.msv < b.msv;
    return a.lop < b.lop;
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
    for (i = 0; i < N; i++) {
        cout << ds[i];
    }
    return 0;
}