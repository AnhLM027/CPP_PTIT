#include <bits/stdc++.h>
using namespace std;

#define AnhLM027 "Le Minh Anh"


class KhachHang;
class MatHang;
class HoaDon;
map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang {
private:
    string ma, name, gt, ns, dc;
    static int cnt1;
public:
    KhachHang() { }
    friend istream& operator>>(istream& in, KhachHang& a) {
        a.ma = to_string(cnt1++);
        while (a.ma.length() < 3) a.ma = '0' + a.ma;
        a.ma = "KH" + a.ma;
        getline(in >> ws, a.name);
        in >> a.gt >> a.ns;
        getline(in >> ws, a.dc);
        KH[a.ma] = a;
        return in;
    }
    friend class HoaDon;
    string getName() { return name; }
    string getDc() { return dc; }
};
int KhachHang::cnt1 = 1;

class MatHang {
private:
    string ma, name, donvi;
    int mua, ban;
    static int cnt2;
public:
    MatHang() { mua = ban = 0; }
    friend istream& operator>>(istream& in, MatHang& a) {
        a.ma = to_string(cnt2++);
        while (a.ma.length() < 3) a.ma = '0' + a.ma;
        a.ma = "MH" + a.ma;
        getline(in >> ws, a.name);
        getline(in >> ws, a.donvi);
        in >> a.mua >> a.ban;
        MH[a.ma] = a;
        return in;
    }
    friend class HoaDon;
    string getName() { return name; }
    string getDonvi() { return donvi; }
    int getMua() { return mua; }
    int getBan() { return ban; }
};
int MatHang::cnt2 = 1;

class HoaDon {
private:
    string ma, mkh, mmh;
    int sl;
    static int cnt3;
    KhachHang kh;
    MatHang mh;
public:
    HoaDon() { sl = 0; }
    friend istream& operator>>(istream& in, HoaDon& a) {
        a.ma = to_string(cnt3++);
        while (a.ma.length() < 3) a.ma = '0' + a.ma;
        a.ma = "HD" + a.ma;
        in >> a.mkh >> a.mmh >> a.sl;
        return in;
    }
    friend ostream& operator<<(ostream& out, HoaDon& a) {
        out << a.ma << " " << KH[a.mkh].getName() << " " << KH[a.mkh].getDc() << " "
            << MH[a.mmh].getName() << " " << MH[a.mmh].getDonvi() << " "
            << MH[a.mmh].getMua() << " " << MH[a.mmh].getBan() << " "
            << a.sl << " " << a.sl * MH[a.mmh].getBan() << endl;
        return out;
    }
};
int HoaDon::cnt3 = 1;


int main() {
    ifstream khin("KH.in");
    ifstream mhin("MH.in");
    ifstream hdin("HD.in");
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    khin >> N;
    for (i = 0; i < N; i++) khin >> dskh[i];
    mhin >> M;
    for (i = 0; i < M; i++) mhin >> dsmh[i];
    hdin >> K;
    for (i = 0; i < K; i++) hdin >> dshd[i];

    for (i = 0; i < K; i++) cout << dshd[i];
    khin.close();
    mhin.close();
    hdin.close();
    return 0;
}