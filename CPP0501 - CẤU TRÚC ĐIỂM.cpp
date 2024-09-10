#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;
#define AnhLM027 "Le Minh Anh"

struct Point {
    double x, y;
};

double distance(Point A, Point B) {
    double ans = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
    return ans;
}

void input(Point& A) {
    cin >> A.x >> A.y;
}

int main() {
    struct Point A, B;
    int t; cin >> t;
    while (t--) {
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}