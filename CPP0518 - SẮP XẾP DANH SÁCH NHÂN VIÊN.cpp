#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


struct NhanVien
{
    string cnt, name, gt, dc, mst, ns, khd;
};

void xuly(string& s) {
    for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
    stringstream ss(s);
    string token;
    vector<string> res;
    while (ss >> token) res.push_back(token);
    s = "";
    for (int i = 0; i < res.size(); i++) {
        res[i][0] = toupper(res[i][0]);
        s += res[i];
        if (i != res.size() - 1) s += " ";
    }
}

int cnt = 1;
void nhap(NhanVien& ds) {
    cin.ignore();
    ds.cnt = to_string(cnt++);
    while (ds.cnt.length() < 5) ds.cnt = '0' + ds.cnt;
    getline(cin, ds.name);
    //xuly(ds.name);
    cin >> ds.gt >> ds.ns;
    cin.ignore();
    getline(cin, ds.dc);
    cin >> ds.mst >> ds.khd;
    if (ds.ns[1] == '/') ds.ns = '0' + ds.ns;
    if (ds.ns[4] == '/') ds.ns.insert(3, "0");
    if (ds.khd[1] == '/') ds.khd = '0' + ds.khd;
    if (ds.khd[4] == '/') ds.khd.insert(3, "0");
}

bool cmp(NhanVien a, NhanVien b) {
    int ns1 = stoi(a.ns.substr(6, 4));
    int ns2 = stoi(b.ns.substr(6, 4));
    int ngs1 = stoi(a.ns.substr(3, 2));
    int ngs2 = stoi(b.ns.substr(3, 2));
    int ts1 = stoi(a.ns.substr(0, 2));
    int ts2 = stoi(b.ns.substr(0, 2));
    if (ns1 == ns2 && ts1 == ts2) return ngs1 < ngs2;
    else if (ns1 == ns2) return ts1 < ts2;
    return ns1 < ns2;
}

void sapxep(NhanVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

void inds(NhanVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ds[i].cnt << " " << ds[i].name << " " << ds[i].gt << " " << ds[i].ns << " " <<
            ds[i].dc << " " << ds[i].mst << " " << ds[i].khd << endl;
    }
}

int main() {
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}