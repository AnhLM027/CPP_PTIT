#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


struct SinhVien
{
    string cnt = "";
    string name = "";
    string nganh = "";
    friend istream& operator >> (istream& in, SinhVien& sv) {
        static int cnt = 1;
        sv.cnt = to_string(cnt++);
        while (sv.cnt.length() < 2) sv.cnt = '0' + sv.cnt;
        sv.cnt = "GV" + sv.cnt;
        getline(in, sv.name);
        string s; getline(in, s);
        stringstream ss(s);
        string token;
        while (ss >> token) sv.nganh += toupper(token[0]);
        return in;
    }
    friend ostream& operator << (ostream& out, const SinhVien& sv) {
        out << sv.cnt << " " << sv.name << " " << sv.nganh << " " << endl;
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    string a1 = a.name;
    string a2 = b.name;
    stringstream ss1(a1); string tk1;
    vector<string> res1;
    while (ss1 >> tk1) res1.push_back(tk1);
    stringstream ss2(a2); string tk2;
    vector<string> res2;
    while (ss2 >> tk2) res2.push_back(tk2);
    if (res1[res1.size() - 1] == res2[res2.size() - 1]) return a.cnt < b.cnt;
    return res1.back() < res2.back();
}

void sapxep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

int main() {
    SinhVien ds[105];
    int N, i;
    cin >> N;
    cin.ignore();
    for (i = 0; i < N; i++) {
        cin >> ds[i];
    }
    sapxep(ds, N);
    for (int i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}