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
    cin.ignore();
    while (Q--)
    {
        string tmp;
        getline(cin, tmp);
        string tmp2 = tmp;
        for (int i = 0; i < tmp2.length(); i++) tmp2[i] = toupper(tmp2[i]);
        cout << "DANH SACH SINH VIEN NGANH " << tmp2 << ":\n";
        for (int i = 0; i < N; i++)
        {
            if (ds[i].msv[5] == tmp[0]) {
                if (tmp[0] == 'K' || tmp[0] == 'V' || tmp[0] == 'D') cout << ds[i];
                else if (ds[i].lop[0] != 'E') cout << ds[i];
            }
        }
    }
    return 0;
}