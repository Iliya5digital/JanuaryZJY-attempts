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
    string s;
    cin >> s;
    int n = s.size();
    int f1 = 1, f2 = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] != '?') {
            f1 = 0;
        }
        if (s[i] == '?') {
            f2 = 0;
        }
    }

    if (f1) {
        for (int i = 0; i < n; i++) {
            cout << "0";
        }
        cout << endl;
        return;
    }
    if (f2) {
        cout << s << endl;
        return;
    }

    string ans = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == '?' && i == 0) {
            ans += '0';
            s[i] = '0';
            continue;
        }
        if (s[i] == '?') {
            s[i] = s[i - 1];
        }
        
        ans += s[i];
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
