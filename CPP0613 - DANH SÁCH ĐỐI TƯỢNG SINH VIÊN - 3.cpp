#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


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

struct SinhVien
{
    string msv = "";
    string name = "";
    string lop = "";
    string ns = "";
    double gpa = 0.0;
    friend istream& operator >> (istream& in, SinhVien& sv) {
        static int cnt = 1;
        sv.msv = to_string(cnt++);
        while (sv.msv.length() < 3) sv.msv = '0' + sv.msv;
        sv.msv = "B20DCCN" + sv.msv;
        scanf("\n");
        getline(cin, sv.name);
        xuly(sv.name);
        in >> sv.lop >> sv.ns;
        if (sv.ns[1] == '/') sv.ns = '0' + sv.ns;
        if (sv.ns[4] == '/') sv.ns.insert(3, "0");
        in >> sv.gpa;
        return in;
    }
    friend ostream& operator << (ostream& out, const SinhVien& sv) {
        out << sv.msv << " " << sv.name << " " << sv.lop << " " << sv.ns << " " << fixed << setprecision(2) << sv.gpa << endl;
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

int main() {
    SinhVien ds[50];
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