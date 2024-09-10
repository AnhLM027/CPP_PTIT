#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


struct SinhVien
{
    int cnt;
    string msv, name, lop, email, tt;
};

void nhap(SinhVien ds[], int n) {
    for (int i = 1; i <= n; i++)
    {
        cin >> ds[i].msv;
        cin.ignore();
        ds[i].cnt = i;
        getline(cin, ds[i].name);
        cin >> ds[i].lop >> ds[i].email >> ds[i].tt;
    }
}

bool cmp(SinhVien a, SinhVien b) {
    return a.name < b.name;
}

void sapxep(SinhVien ds[], int n) {
    sort(ds + 1, ds + n + 1, cmp);
}

void in(SinhVien ds[], int n) {
    for (int i = 1; i <= n; i++) {
        cout << ds[i].cnt << " " << ds[i].msv << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].email << " " << ds[i].tt << endl;
    }
}

int main() {
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    int Q; cin >> Q;
    while (Q--)
    {
        string tmp; cin >> tmp;
        for (int i = 1; i <= N; i++)
        {
            if (ds[i].tt == tmp) {
                cout << ds[i].cnt << " " << ds[i].msv << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].email << " " << ds[i].tt << endl;
            }
        }
    }
    return 0;
}