#include <bits/stdc++.h>

//#include "LocalDebug.h"

using namespace std;

#define int long long
#define pb push_back
#define VI vector<int>

const int inf = 0x3f3f3f3f;
const long long llinf = (long long)0x3f3f3f3f3f3f3f3f;
const long long MOD = (long long)1e9 + 7LL;
const size_t N = (size_t)1e6 + 5;

#define IO                       \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);             \
    std::cout.tie(0)

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1) {
        cout << "YES\n" << n << endl;
        for (int i = 0; i < n; i++) {
            cout << "1 ";
        }
        cout << endl;
        return;
    }

    if (k == 1){
        cout << "NO\n";
    }

    if (k == 2) {
        if (!(n & 1)) {
            cout << "YES\n" << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) {
                cout << "2 ";
            }
            cout << endl;
            return;
        }
        else {
            cout << "NO\n";
        }
    }

    if (k > 2) {
        cout << "YES\n";
        if (n & 1) {
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2 - 1; i++) {
                cout << "2 ";
            }
            cout << "3 " << endl;
            return;
        }
        else {
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) {
                cout << "2 ";
            }
            cout << endl;
            return;
        }
    }
}   

signed main() {
    IO;
    int T;
    T = 1; 
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
