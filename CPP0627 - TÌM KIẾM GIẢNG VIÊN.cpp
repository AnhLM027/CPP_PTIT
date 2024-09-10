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

bool check(const string a, string s) {
    string tmp = a;
    for (int i = 0; i < tmp.length(); i++) tmp[i] = tolower(tmp[i]);
    for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
    if (tmp.find(s) != string::npos) return true;
    return false;
}


int main() {
    SinhVien ds[105];
    int N, i;
    cin >> N;
    cin.ignore();
    for (i = 0; i < N; i++) {
        cin >> ds[i];
    }
    int t; cin >> t; cin.ignore();
    while (t--)
    {
        string s; cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        for (int i = 0; i < N; i++)
        {
            if (check(ds[i].name, s)) cout << ds[i];
        }
    }
    return 0;
}