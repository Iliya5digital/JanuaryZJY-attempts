#include <bits/stdc++.h>
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

void solve() {
    string s;
    cin >> s;
    if (s == "_") {
        cout << "2\n";
        return;
    }
    if (s == "^" || s == "^_" || s == "_^") {
        cout << "1\n";
        return;
    }

    int num = 0;
    if (s[0] == '_') {
        num++;
    }
    if (s[s.size() - 1] == '_') {
        num++;
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '_' && s[i] == s[i - 1]) {
            num++;
        }
    }

    cout << num << endl;
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
