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

int main() {
    SinhVien ds[1005];
    int N, i;
    cin >> N;
    cin.ignore();
    for (i = 0; i < N; i++) {
        cin >> ds[i];
    }
    int Q; cin >> Q;
    while (Q--)
    {
        string tmp; cin >> tmp;
        string tmp2 = tmp.substr(2);
        cout << "DANH SACH SINH VIEN KHOA " << tmp << ":\n";
        for (int i = 0; i < N; i++)
        {
            if (ds[i].lop.substr(1, 2) == tmp2) cout << ds[i];
        }
    }
    return 0;
}