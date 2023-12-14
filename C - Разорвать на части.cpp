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

int Log[N];

void init() {
    Log[0] = -1;
    for (int i = 1; i <= 200005; i++) {
        if (i & (i - 1)) {
        	Log[i] = Log[i - 1];
        }
        else {
            Log[i] = Log[i - 1] + 1;
        }
    }
}

void solve() {
    string s;
    cin >> s;
    
    int ans = inf;
    for (int i = 0; i < 26; i++) {
        int num = 0, l = 0;
        bool f = true;
        for (int p = 0; p < s.size(); p++) {
            if (s[p] == i + 'a') {
                f = false;
                l = max(l, num);
                num = 0;
            }
            else {
                num++;
            }
            if (p == s.size() - 1) {
                l = max(l, num);
                num = 0;
            }
            
        }
        if (f) {
            continue;
        }
        ans = min(ans, Log[l] + 1);
    }
    
    cout << ans << endl;
}   

signed main() {
    IO;
    int T;
    T = 1; 
    cin >> T;
    init();
    while (T--) {
        solve();
    }
    return 0;
}
