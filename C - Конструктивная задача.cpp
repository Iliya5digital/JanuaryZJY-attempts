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

int Mex(vector<int> a) {
    sort (a.begin(), a.end());
    if (a[0] != 0) {
        return 0;
    }
    else {
        for (int i = 1; i < a.size(); i++) {
            if (a[i] != a[i - 1] + 1 && a[i] != a[i - 1]) {
                return a[i - 1] + 1;
            }
        }
    }

    return a.back() + 1;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m = Mex(a);
    if (m == 0) {
        cout << "YES\n";
        return;
    }

    int l = inf;
    int r = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == m + 1) {
            l = min(l, i);
            r = max(r, i);
        }
    }

    if (r == -1) {
        cout << (m == n ? "NO\n" : "YES\n");
        return;
    }
    
    for (int i = l; i <= r; i++) {
        a[i] = m;
    }
    cout << (Mex(a) == m + 1 ? "YES\n" : "NO\n");
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
