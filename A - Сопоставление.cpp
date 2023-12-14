#include <bits/stdc++.h>
//#define LOCAL
#ifdef LOCAL
#include "LocalDebug.h"
#endif

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

int qpow(int a, int b) {
    int ans = 1 % MOD;
    for (; b; b >>= 1) {
        if (b & 1) {
            ans *= a % MOD;
        }
        a *= a % MOD;
    }
    return ans;
}

void solve() {
    string s;
    cin >> s;

    if (s[0] == '0') {
        cout << "0\n";
        return;
    }
    int num = 0;
    bool f = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?') {
            if (i == 0) {
                f = true;
            }
            num++;
        }
    }
    
    

    int ans = 0;
    if (f) {
        num--;
        ans = qpow(10, num);
        ans *= 9;
    }
    else {
        ans = qpow(10, num);
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
