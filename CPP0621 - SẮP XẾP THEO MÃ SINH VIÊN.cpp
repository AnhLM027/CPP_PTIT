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
        getline(in, sv.msv);
        getline(in, sv.name);
        getline(in, sv.lop);
        getline(in, sv.email);
        return in;
    }
    friend ostream& operator << (ostream& out, const SinhVien& sv) {
        out << sv.msv << " " << sv.name << " " << sv.lop << " " << sv.email << endl;
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    return a.msv < b.msv;
}

void sapxep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

int main() {
    SinhVien ds[1005];
    int N = 0;
    while (cin >> ds[N])
    {
        N++;
    }
    sapxep(ds, N);
    for (int i = 0; i < N; i++) {
        cout << ds[i];
    }
    return 0;
}