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
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    xb -= xa; yb -= ya; xc -= xa; yc -= ya;
    
    int ans = 1;
    if ((xb > 0 && xc > 0) || (xb < 0 && xc < 0)) {
        ans += min(abs(xb), abs(xc));
    }
    if((yb > 0 && yc > 0) || (yb < 0 && yc < 0)) {
        ans += min(abs(yb), abs(yc));
    }

    cout << ans << endl;
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
