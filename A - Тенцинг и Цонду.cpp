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
    int n, m;
    cin >> n >> m;
    VI a(n);
    VI b(m);
    int suma = 0, sumb = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        suma += a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        sumb += b[i];
    }

    if (suma == sumb) {
        cout << "Draw\n";
    }
    else if (suma > sumb) {
        cout << "Tsondu\n";
    }
    else if (suma < sumb) {
        cout << "Tenzing\n";
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
