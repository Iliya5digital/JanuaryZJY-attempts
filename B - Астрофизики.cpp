#include <bits/stdc++.h>

//#include "LocalDebug.h"

using namespace std;

#define int long long
#define pb push_back

const int inf = 0x3f3f3f3f;
const long long llinf = (long long)0x3f3f3f3f3f3f3f3f;
const long long MOD = (long long)1e9 + 7LL;
const size_t N = (size_t)1e6 + 5;

#define IO                       \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);             \
    std::cout.tie(0)

void solve() {
    int n, k, g;
    cin >> n >> k >> g;
    if (k * g <= (n - 1) * ((g + 1) / 2 - 1)) {
        cout << k * g << endl;
        return;
    }
    int x = k * g - (n - 1) * ((g + 1) / 2 - 1);
    if (x % g >= (g + 1) / 2) {
        cout << k * g - (x + (g - x % g)) << endl;
    }
    else {
        cout << k * g - (x - x % g) << endl;
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
