#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

struct NhanVien
{
    string cnt = "";
    string name = "";
    string gt = "";
    string ns = "";
    string dc = "";
    string mst = "";
    string khd = "";
    friend istream& operator >> (istream& in, NhanVien& sv) {
        static int cnt = 1;
        sv.cnt = to_string(cnt++);
        while (sv.cnt.length() < 5) sv.cnt = '0' + sv.cnt;
        in.ignore();
        getline(in, sv.name);
        in >> sv.gt >> sv.ns;
        if (sv.ns[1] == '/') sv.ns = '0' + sv.ns;
        if (sv.ns[4] == '/') sv.ns.insert(3, "0");
        in.ignore();
        getline(in, sv.dc);
        in >> sv.mst >> sv.khd;
        if (sv.khd[1] == '/') sv.khd = '0' + sv.khd;
        if (sv.khd[4] == '/') sv.khd.insert(3, "0");
        return in;
    }
    friend ostream& operator << (ostream& out, const NhanVien& sv) {
        out << sv.cnt << " " << sv.name << " " << sv.gt << " " << sv.ns << " " << sv.dc << " " << sv.mst << " " << sv.khd << endl;
        return out;
    }
};

int main() {
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) cin >> ds[i];
    for (i = 0; i < N; i++) cout << ds[i];
    return 0;
}