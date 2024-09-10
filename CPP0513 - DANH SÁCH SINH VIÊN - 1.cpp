#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


struct SinhVien
{
    string cnt, name, lop, ns;
    double gpa;
};

void nhap(SinhVien ds[], int n) {
    for (int i = 1; i <= n; i++) {
        cin.ignore();
        ds[i].cnt = to_string(i);
        while (ds[i].cnt.length() < 3) ds[i].cnt = '0' + ds[i].cnt;
        ds[i].cnt = "B20DCCN" + ds[i].cnt;
        getline(cin, ds[i].name);
        cin >> ds[i].lop >> ds[i].ns;
        if (ds[i].ns[1] == '/') ds[i].ns = '0' + ds[i].ns;
        if (ds[i].ns[4] == '/') ds[i].ns.insert(3, "0");
        cin >> ds[i].gpa;
    }
}

void in(SinhVien ds[], int n) {
    for (int i = 1; i <= n; i++) {
        cout << ds[i].cnt << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].ns << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main() {
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}